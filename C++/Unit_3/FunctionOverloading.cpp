#include <iostream>
// Function to calculate square of an integer
int square(int x)
{
    return x * x;
}
// Function to calculate square of a double
double square(double x)
{
    return x * x;
}
int main()
{
    int intNum = 5;
    double doubleNum = 3.5;
    std::cout << "Square of " << intNum << " is: " << square(intNum) << std::endl;
    std::cout << "Square of " << doubleNum << " is: " << square(doubleNum) << std::endl;
    return 0;
}