#include <iostream>
using namespace std;
// Base class 1
class Base1
{
public:
    void display1()
		{
        cout << "Base1 display" << endl;
    }
};
// Base class 2
class Base2
{
public:
    void display2()
		{
        cout << "Base2 display" << endl;
    }
};
// Derived class inherits from Base1 and Base2
class Derived : public Base1, public Base2
{
public:
    void displayDerived()
		{
        cout << "Derived display" << endl;
    }
};

int main()
{
    Derived derivedObj;
    // Accessing methods from both base classes
    derivedObj.display1();  // Output: "Base1 display"
    derivedObj.display2();  // Output: "Base2 display"
    derivedObj.displayDerived();  // Output: "Derived display"
    return 0;
}