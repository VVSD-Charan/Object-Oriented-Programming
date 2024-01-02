#include <iostream>
using namespace std;

class A
{
    public:

    bool a = "true";
};

class B : public A 
{
    public :

    bool b = "true";
};

class C : public B
{
    public:

    bool c = "true";
};

class D : public A,public B
{
    public:

    bool d = "true";
};

int main()
{
    C obj;
    
    cout<<"A? "<<(obj.a ? "True":"False")<<"\n";
    cout<<"B? "<<(obj.b ? "True":"False")<<"\n";
    cout<<"C? "<<(obj.c ? "True":"False")<<"\n";

    // Hybrid inheritence is combination of hierarchial and multiple inheritence 
}