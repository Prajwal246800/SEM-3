#include <iostream>
using namespace std;

int main()
{
    try
		{
        // Throw an exception
        throw runtime_error("Something went wrong!");
    }
		catch (const runtime_error& e)
		{
        // Catch and handle the exception
        cout << "Exception caught: " << e.what() << endl;
    }
    return 0;
}