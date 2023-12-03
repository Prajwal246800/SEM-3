#include <iostream>
class Complex
{
private:
    double real;
    double imag;
public:
    Complex(double r, double i) : real(r), imag(i) {}
    // Overloading the + operator for adding two Complex numbers
    Complex operator+(const Complex& other)
		{
        Complex result(real + other.real, imag + other.imag);
        return result;
    }
    // Overloading the << operator for easier printing
    friend std::ostream& operator<<(std::ostream& os, const Complex& c)
		{
        os << c.real << " + " << c.imag << "i";
        return os;
    }
};

int main()
{
    Complex c1(2.0, 3.0);
    Complex c2(4.0, 1.5);
    Complex sum = c1 + c2; // Uses the overloaded + operator
    std::cout << "Sum: " << sum << std::endl; // Uses the overloaded << operator for printing
    return 0;
}