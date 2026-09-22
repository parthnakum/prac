#include <iostream>
using namespace std;

void print1ToN(int number)
{
    if (number <= 0)
        return;
    print1ToN(number - 1);
    cout << number << endl;
}

int main()
{
    cout << "Enter number: ";
    int number;
    cin >> number;

    print1ToN(number);
}