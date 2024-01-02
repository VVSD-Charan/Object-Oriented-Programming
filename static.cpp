#include <iostream>
using namespace std;

class arithmetic {
public:
    static int sum;
    // Declaration of a static method 
    static int addNumbers(int a, int b);
};

// Definition and initialization of the static variable 'sum'
// Once a static variable is defined outside the class, it can be used in static methods outside the class
int arithmetic::sum = 0;

// Definition of the static method
// Observe that static methods cannot contain non-static variables
// In this case, 'sum' is a static variable and can be accessed within the static method
int arithmetic::addNumbers(int a, int b) {
    sum = a + b;
    return sum;
}

int main() {
    cout << arithmetic::addNumbers(1, 2) << "\n";
    // Static methods do not require the creation of an object.
}
