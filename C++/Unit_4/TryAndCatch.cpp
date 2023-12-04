#include <iostream>
using namespace std;
int main()
{
    try
	{
        int numerator = 10;
        int denominator = 0; // If the denominator is Not Zero, then it Calculates the ans
        if (denominator == 0)
				{
            // Throw an exception in case of division by zero
            throw runtime_error("Division by zero error!");
        }
        int result = numerator / denominator;
        cout << "Result of division: " << result << endl;
    }
		catch (const runtime_error& e)
		{
        // Catch the exception and handle it
        cout << "Exception caught: " << e.what() << endl;
    }
    return 0;
}