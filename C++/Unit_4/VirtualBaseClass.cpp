#include <iostream>
using namespace std;
class Base
{
public:
    int commonData;
};
class Derived1 : public Base
{
public:
    void setData(int data)
		{
        commonData = data;
    }
};
class Derived2 : public Base
{
public:
    void displayData()
		{
        cout << "Data from Derived2: " << commonData << endl;
    }
};
class Diamond : public Derived1, public Derived2
{
public:
    void displayDataFromBoth()
		{
        cout << "Data from Derived1: " << Derived1::commonData << endl;
        cout << "Data from Derived2: " << Derived2::commonData << endl;
    }
};

int main()
{
    Diamond diamondObj;
    diamondObj.setData(42);
    diamondObj.displayDataFromBoth();
    diamondObj.displayData();
    return 0;
}