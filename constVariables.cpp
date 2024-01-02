#include <iostream>
using namespace std;

class Person
{
    public:

    // a is declared first 
    const int a;
    // b is declared next 
    const int b;

    Person(int x):a(x),b(2*a){}

    // Person(int x):b(x),a(2*b){}
    // This is wrong  because a is declared first , so value of a will be assigned first. But as b is not yet assigned , a value will be garbage
    // This concept is called initialization list where const variables declared first will be assigned values first 
};

int main()
{
    Person charan(10);

    cout<<charan.a<<" "<<charan.b<<"\n";
}