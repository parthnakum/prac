#include <iostream>
using namespace std;

bool isPrimeMethod1(int number, int divider)
{
    if (number <= 1)
    {
        return false;
    }
    if (divider <= 1)
    {
        return true;
    }
    if (number % divider == 0)
    {
        return false;
    }
    return isPrimeMethod1(number, divider - 1);
}

bool isPrimeMethod2(int number, int divider)
{
    if (number <= 1)
    {
        return false;
    }
    if (divider >= number)
    {
        return true;
    }
    if (number % divider == 0)
    {
        return false;
    }
    return isPrimeMethod2(number, divider + 1);
}

bool isPrimeMethod3(int number, int divider = 3)
{
    if (number <= 1)
    {
        return false;
    }
    if (number == 2)
    {
        return true;
    }
    if (number % 2 == 0)
    {
        return false;
    }
    if (divider > number / divider)
    {
        return true;
    }
    if (number % divider == 0)
    {
        return false;
    }
    return isPrimeMethod3(number, divider + 1);
}

int main()
{
    int number;
    cin >> number;

    cout << (isPrimeMethod1(number, number - 1) ? "YES" : "NO") << endl;
    cout << (isPrimeMethod2(number, 2) ? "YES" : "NO") << endl;

    // optimsed approach
    cout << (isPrimeMethod3(number) ? "YES" : "NO") << endl;
}
