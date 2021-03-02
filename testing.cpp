#include <bits/stdc++.h>
#include "Railways.h"
using namespace std;

class test{
    private:
        test(int b=0){
            cout<<"constructed"<<endl;
        }
        ~test(){
            cout<<"destructed"<<endl;
        }
    public:
        static int a[3];
        static const test &TEST(int b=0){
            static const test mytest(b);
            return mytest;
        }
        void print() const{
            cout<<a[3]<<endl;
        }
        friend ostream &operator<<(ostream &, const test &);
};

ostream &operator<<(ostream &out, const test &t){
    out<<t.a[3];
    return out;
}

int test::a[3] = {1, 2, 4};

class base{
    public:
        virtual void foo() const = 0;
        static void unittest(){
            cout<<"hey"<<endl;
        }
};

class der1 : public base{
    static int d1;
    public:
        void foo() const{
            cout<<"DER"<<d1<<endl;
        }
};

class der2 : public base{
    static int d2;
    public:
        void foo() const{
            cout<<"DER"<<d2<<endl;
        }
};

void myfunc(const base &b){
    b.foo();
}

int der1::d1 = 1;
int der2::d2 = 2;

int main(){
    base::unittest();
    der1 a;
    der2 b;
    myfunc(a);
    myfunc(b);
    return 0;
}