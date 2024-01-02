#include <iostream>
using namespace std;

class human 
{
    public:

    bool run = true;
    bool eat = true;
    bool fly = false;
    bool  four_legs = false;
};

class animal : public human
{
    public :

    bool four_legs = true;
};

class birds : public animal
{
    public:

    bool run = false;
    bool fly = true;
    bool four_legs = false;
};

int main()
{
    birds owl;

    cout<<"Eat? "<<(owl.eat? "True" : "False")<<"\n";
    cout<<"Four legs? "<<(owl.four_legs ? "True" : "False")<<"\n";
    cout<<"Fly? "<<(owl.fly? "True" : "False")<<"\n";
    cout<<"Run? "<<(owl.run? "True" : "False")<<"\n";
}

// In multilevel inheritance one child class is inherited by other 