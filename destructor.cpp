#include <iostream>
using namespace std;

class person 
{
    public:

    person()
    {
        cout<<typeid(*this).name()<<" Constructor called\n";
    }

    ~person()
    {
        cout<<typeid(*this).name()<<" Destructor called\n";
    }
};

int main()
{
    person charan;
    // delete(charan);
    // There is no need to call delete for statically allocated objects because destructor is called by default for statically created objects when object is no longer used at the end.
    // It prints destructor called at end 

    person* manishi = new person();
    delete(manishi);
    // For dynamically created objects we must call destructor manually. It will not be called by default at the end.
}
