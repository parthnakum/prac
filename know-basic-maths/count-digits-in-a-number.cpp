#include <iostream>
using namespace std;

int bruteForce(int number)
{
    int count = 0;

    while (number != 0)
    {
        number /= 10;
        count++;
    }
    return count;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    const int result1 = bruteForce(number);
    cout << result1 << endl;

    const int result2 = (int)log10(number) + 1;
    cout << result2 << endl;

    const int result3 = to_string(number).length();
    cout << result3 << endl;

    return 0;
}