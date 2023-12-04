#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show()
		{
        cout << "Base class show() called" << endl;
    }
};
class Derived : public Base
{
public:
    void show() override
		{
        cout << "Derived class show() called" << endl;
    }
};

int main()
{
    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj; // Pointing base class pointer to derived class object
    // Calls the show function based on the object being pointed to
    basePtr->show(); // Output: "Derived class show() called"
    return 0;
}