#include <iostream>
using namespace std;

class animal
{
    public:

    bool run = true;
    bool fly = false;
    bool eat = true;
};

class birds : public animal
{
    public:

    bool run = false;
    bool fly = true;
};

int main()
{
    birds owl;

    cout<<"Run : "<<(owl.run ? "True":"False")<<"\n";
    cout<<"Eat : "<<(owl.eat ? "True":"False")<<"\n";
    cout<<"Fly : "<<(owl.fly ? "True":"False")<<"\n";
}