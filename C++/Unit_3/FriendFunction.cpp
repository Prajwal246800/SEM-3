#include <iostream>

class MyClass
{
private:
    int privateNumber;
public:
    MyClass() : privateNumber(0) {}
    // Declaration of friend function inside the class
    friend void friendFunction(MyClass obj);
    void setPrivateNumber(int num)
    {
        privateNumber = num;
    }
};

// Definition of friend function accessing private member of MyClass
void friendFunction(MyClass obj)
{
    std::cout << "Accessing private member from friend function: " << obj.privateNumber << std::endl;
}

int main()
{
    MyClass myObj;
    myObj.setPrivateNumber(42);
    // Calling friend function
    friendFunction(myObj);
    return 0;
}
