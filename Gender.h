// Nisarg Upadhyaya
// 19CS30031

#ifndef _GENDER_H
#define _GENDER_H

#include <iostream>
#include <string>

using namespace std;

// Generic Gender type to generate specific genders
template <typename T>
class GenderTypes;

// abstract base class
class Gender{
    private:
        const string &name_;

        // tag-types
        struct MaleType{};
        struct FemaleType{};

    protected:
        Gender(const string &);
        virtual ~Gender();

    public:
        string GetName() const;

        virtual string GetTitle() const = 0;
        static bool IsMale(const Gender &);

        // enumerated types
        typedef GenderTypes<MaleType> Male;
        typedef GenderTypes<FemaleType> Female;
};

// derived classes (singletons)
template <typename T>
class GenderTypes : public Gender{
    private:
        static const string sName;
        static const string sSalutation;

        GenderTypes();
        ~GenderTypes();

    public:
        // singleton object
        static const GenderTypes<T> &Type();

        string GetTitle() const;

        static void UnitTest();
};

// gender implementation
inline string Gender::GetName() const{ 
    return name_; 
}
inline bool Gender::IsMale(const Gender& g){ 
    return &g == &Gender::Male::Type(); 
}

// gender types implementations
template<typename T> GenderTypes<T>::GenderTypes(): Gender(sName) {}
template<typename T> GenderTypes<T>::~GenderTypes() {}
template<typename T> inline const GenderTypes<T> &GenderTypes<T>::Type(){
    static const GenderTypes<T> sGender;
    return sGender;
}

template<typename T> inline string GenderTypes<T>::GetTitle() const{
    return sSalutation;
}

#endif
