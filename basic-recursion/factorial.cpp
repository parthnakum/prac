#include <iostream>
using namespace std;

int factorial(int number)
{
    if (number <= 0)
        return 1;
    return number * factorial(number - 1);
}

int main()
{
    cout << "Enter number: ";
    int number;
    cin >> number;

    if (number < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        cout << factorial(number) << endl;
    }
}