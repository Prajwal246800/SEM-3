#include <iostream>
// Base class with a virtual function
class Animal
{
public:
    virtual void makeSound()
    {
        std::cout << "Animal makes a sound" << std::endl;
    }
    // Pure virtual function (abstract method)
    virtual void move() = 0; // Pure virtual function, making Animal an abstract class
};
// Derived classes
class Dog : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "Dog barks" << std::endl;
    }
    void move() override
    {
        std::cout << "Dog moves on four legs" << std::endl;
    }
};
class Bird : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "Bird chirps" << std::endl;
    }
    void move() override
    {
        std::cout << "Bird flies" << std::endl;
    }
};

int main()
{
    // Using polymorphism with base class pointers
    Animal *animal1 = new Dog();
    Animal *animal2 = new Bird();
    animal1->makeSound(); // Output depends on the actual object type
    animal1->move();
    animal2->makeSound(); // Output depends on the actual object type
    animal2->move();
    delete animal1;
    delete animal2;
    return 0;
}
