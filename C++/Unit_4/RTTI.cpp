#include <iostream>
#include <typeinfo>
class Base
{
    virtual void foo() {}
};

class Derived : public Base {};
int main()
{
    Base* basePtr = new Derived();
    // Using typeid to get the actual type of an object
    if (typeid(*basePtr) == typeid(Derived))
		{
        std::cout << "basePtr points to a Derived object." << std::endl;
    }
    delete basePtr;
    return 0;
}

