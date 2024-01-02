#include <iostream>
using namespace std;

class batsman
{
    public:

    bool bat = "true";
};

class bowler : public batsman
{
    public:

    bool bowl = "true";
};

class keeper : public batsman
{
    public:

    bool keep = "true";
};

int main()
{
    keeper dhoni;

    cout<<"Bat ? "<<(dhoni.bat? "True":"False")<<"\n";
    cout<<"Keep ? "<<(dhoni.keep? "True":"False")<<"\n";

    // One class is inherited by multiple classes in hierarchial inheritence
}