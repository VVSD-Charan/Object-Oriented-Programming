#include <iostream>
using namespace std;

class obj {
public:
    int num;

    // Overloaded addition operator as a member function
    void operator+(obj &b) {
        int val1 = this->num;
        int val2 = b.num;

        cout<<(val1 - val2)<<"\n";
    }
};

int main() {
    obj a;
    obj b;

    a.num = 10;
    b.num = 5;

    a+b;
    // We have overloaded + as subtraction so 10+5 is actually 10-5 and prints 5
    return 0;
}
