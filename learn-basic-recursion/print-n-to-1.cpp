#include <iostream>
using namespace std;

void printNTo1(int number)
{
    if (number <= 0)
        return;
    cout << number << endl;
    printNTo1(number - 1);
}

int main()
{
    cout << "Enter number: ";
    int number;
    cin >> number;

    printNTo1(number);
}