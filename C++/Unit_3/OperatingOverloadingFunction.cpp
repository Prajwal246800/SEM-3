#include <iostream>
class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}
    // Overloading the + operator to add two fractions
    Fraction operator+(const Fraction& other)
		{
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }
    // Function to simplify the fraction
    void simplify()
		{
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }
    // Function to find the greatest common divisor (GCD)
    int findGCD(int a, int b)
		{
        while (b != 0)
				{
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Overloading the << operator for easier printing
    friend std::ostream& operator<<(std::ostream& os, const Fraction& frac)
		{
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }
};

int main()
{
    Fraction frac1(1, 2);
    Fraction frac2(3, 4);
    Fraction sum = frac1 + frac2; // Using the overloaded + operato
    sum.simplify(); // Simplifying the sum
    std::cout << "Fraction 1: " << frac1 << std::endl;
    std::cout << "Fraction 2: " << frac2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}