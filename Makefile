vpath %.h include
vpath %.cpp src:tests/application:tests/unit
vpath %.o lib

G++ = g++ -I include -std=c++17

unittests: build/UnitTestGender build/UnitTestBookingClasses
	./build/UnitTestGender
	./build/UnitTestBookingClasses

build/ApplicationTestsHappy : ApplicationTestsHappy.cpp Booking.o BookingCategory.o Concession.o Gender.o BookingClasses.o Application.o Divyaang.o Passenger.o Date.o Name.o Station.o Railways.o
	mkdir -p build
	$(G++) $< lib/Booking.o lib/BookingCategory.o lib/Concession.o lib/Gender.o lib/BookingClasses.o lib/Application.o lib/Divyaang.o lib/Passenger.o lib/Date.o lib/Name.o lib/Station.o lib/Railways.o -o $@

build/ApplicationTestsExceptional : ApplicationTestsExceptional.cpp Booking.o BookingCategory.o Concession.o Gender.o BookingClasses.o Application.o Divyaang.o Passenger.o Date.o Name.o Station.o Railways.o
	mkdir -p build
	$(G++) $< lib/Booking.o lib/BookingCategory.o lib/Concession.o lib/Gender.o lib/BookingClasses.o lib/Application.o lib/Divyaang.o lib/Passenger.o lib/Date.o lib/Name.o lib/Station.o lib/Railways.o -o $@

build/UnitTestGender: UnitTestGender.cpp Gender.o
	mkdir -p build
	$(G++) $< lib/Gender.o -o $@

build/UnitTestBookingClasses: UnitTestBookingClasses.cpp BookingClasses.o
	mkdir -p build
	$(G++) $< lib/BookingClasses.o -o $@

Booking.o : Booking.cpp Booking.h Concession.h BookingCategory.h Railways.h Exceptions.h Station.h BookingClasses.h Passenger.h Date.h Categories.h
	mkdir -p lib
	$(G++) -c $< -o lib/$@

BookingCategory.o : BookingCategory.cpp BookingCategory.h Categories.h Booking.h Exceptions.h
	mkdir -p lib
	$(G++) -c $< -o lib/$@

Concession.o : Concession.cpp Concession.h Passenger.h
	mkdir -p lib
	$(G++) -c $< -o lib/$@

Gender.o : Gender.cpp Gender.h
	mkdir -p lib
	$(G++) -c $< -o lib/$@

BookingClasses.o : BookingClasses.cpp BookingClasses.h
	mkdir -p lib
	$(G++) -c $< -o lib/$@

Application.o : Application.cpp BookingClasses.h Booking.h Concession.h Date.h
	mkdir -p lib
	$(G++) -c $< -o lib/$@

Divyaang.o : Divyaang.cpp Divyaang.h BookingClasses.h
	mkdir -p lib
	$(G++) -c $< -o lib/$@

Passenger.o : Passenger.cpp Passenger.h Exceptions.h Name.h Date.h Gender.h Divyaang.h
	mkdir -p lib
	$(G++) -c $< -o lib/$@

Date.o : Date.cpp Date.h Exceptions.h
	mkdir -p lib
	$(G++) -c $< -o lib/$@

Name.o : Name.cpp Name.h Exceptions.h
	mkdir -p lib
	$(G++) -c $< -o lib/$@

Station.o : Station.cpp Station.h Railways.h
	mkdir -p lib
	$(G++) -c $< -o lib/$@

Railways.o : Railways.cpp Railways.h Station.h Exceptions.h
	mkdir -p lib
	$(G++) -c $< -o lib/$@
