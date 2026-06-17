#include <iostream>
using namespace std;

bool isPalindrome1(int number)
{
    if (number < 0 || (number % 10 == 0 && number != 0))
        return false;

    int originalNum = number;
    int revNumber = 0;
    while (number > 0)
    {
        revNumber = revNumber * 10 + (number % 10);
        number /= 10;
    }

    return originalNum == revNumber;
}

bool isPalindrome2(int number)
{
    if (number < 0 || (number % 10 == 0 && number != 0))
        return false;

    int originalNum = number;
    int halfRevNum = 0;

    while (number > halfRevNum)
    {
        halfRevNum = halfRevNum * 10 + (number % 10);
        number /= 10;
    }

    return number == halfRevNum || number == halfRevNum / 10;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "isPalindrome1: ";
    if (isPalindrome1(number))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    cout << "isPalindrome2: ";
    if (isPalindrome2(number))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}