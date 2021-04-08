## Nisarg Upadhyaya
## 19CS30031

There are 5 primary classes which have been implemented namely
1. Booking
2. BookingClasses
3. Railways
4. Station
5. Date

The definition of each class as well as implementation of inline functions is in the file **\<ClassName\>.h**

The implementation of each class (excluding the unit tests) is in the file **\<ClassName\>.cpp**

The unit tests for each class are in the **UnitTest\<ClassName\>.cpp** files

**Application.cpp** contains initialisation of static constants which are changeable from the application space

Note that **Application.cpp** itself doesn't have a main function. Test files have been provided with main functions to run the code.

**ApplicationTests.cpp** contains application test code.

## Compilation commands to run any unit test or application test

#### COMPILER USED: g++ (Version 10.1.0)
#### C++ STANDARD: C++11

To see constructor and destructor calls add the flag -D_DEBUG to any compilation command

- UnitTestBooking
```
$ g++-10 -std=c++11 UnitTestBooking.cpp Application.cpp Booking.cpp Date.cpp Railways.cpp BookingClasses.cpp Station.cpp -o UnitTestBooking
$ ./UnitTestBooking
```

- UnitTestStation
```
$ g++-10 -std=c++11 UnitTestStation.cpp Railways.cpp Station.cpp -o UnitTestStation
$ ./UnitTestStation
```

- UnitTestRailways
```
$ g++-10 -std=c++11 UnitTestRailways.cpp Railways.cpp Station.cpp -o UnitTestRailways
$ ./UnitTestRailways
```

- UnitTestDivyaang
```
$ g++-10 -std=c++11 UnitTestDivyaang.cpp Divyaang.cpp BookingClasses.cpp Application.cpp -o UnitTestDivyaang
$ ./UnitTestDivyaang
```

- UnitTestPassenger
```
$ g++-10 -std=c++11 UnitTestPassenger.cpp Passenger.cpp Date.cpp Name.cpp Gender.cpp Divyaang.cpp Application.cpp -o UnitTestPassenger
$ ./UnitTestPassenger
```

- UnitTestName
```
$ g++-10 -std=c++11 UnitTestName.cpp Name.cpp -o UnitTestName
$ ./UnitTestName
```

- UnitTestDate
```
$ g++-10 -std=c++11 UnitTestDate.cpp Date.cpp -o UnitTestDate
$ ./UnitTestDate
```

- UnitTestGender
```
$ g++-10 -std=c++11 UnitTestGender.cpp Gender.cpp Application.cpp -o UnitTestGender
$ ./UnitTestGender
```

- UnitTestBookingClasses
```
$ g++-10 -std=c++11 UnitTestBookingClasses.cpp Application.cpp BookingClasses.cpp -o UnitTestBookingClasses
$ ./UnitTestBookingClasses
```

- ApplicationTests
```
$ g++-10 -std=c++11  ApplicationTests.cpp Application.cpp BookingClasses.cpp Railways.cpp Station.cpp Booking.cpp Date.cpp -o ApplicationTests
$ ./ApplicationTests
```