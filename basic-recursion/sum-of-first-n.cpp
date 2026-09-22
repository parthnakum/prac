#include <iostream>
using namespace std;

int sumOfFirstN(int number, int sum)
{
    if (number <= 0)
        return sum;
    return sumOfFirstN(number - 1, sum + number);
}

int main()
{
    cout << "Enter number: ";
    int number;
    cin >> number;

    cout << sumOfFirstN(number, 0) << endl;
}