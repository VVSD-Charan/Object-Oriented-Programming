#include <iostream>
using namespace std;

class Person
{
    public:

    // a is declared first 
    const int a;
    // b is declared next 
    const int b;

    Person(int a):a(a),b(2*a){}

    // Person(int a):b(a),a(b){}
    // This is wrong  because a is declared first , so a must be assigned value first and then b
};

int main()
{
    Person charan(10);

    cout<<charan.a<<" "<<charan.b<<"\n";
}