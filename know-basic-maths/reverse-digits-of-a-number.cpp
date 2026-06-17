#include <iostream>
using namespace std;

int reverse(int n)
{
    int revNumber = 0;
    while (n > 0)
    {
        revNumber = revNumber * 10 + (n % 10);
        n /= 10;
    }
    return revNumber;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int res = reverse(number);

    cout << "Reverse number: " << res << endl;

    return 0;
}