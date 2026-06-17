#include <iostream>
using namespace std;

bool isArmstrong(int number)
{
    int originalNumber = number;
    int length = to_string(number).length();

    int res = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        res += pow(lastDigit, length);
        number /= 10;
    }

    return res == originalNumber;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}