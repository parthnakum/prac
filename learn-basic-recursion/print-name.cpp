#include <iostream>
using namespace std;

void printName(string name, int count)
{
    if (count == 0)
        return;
    cout << name << endl;
    printName(name, count - 1);
}

int main()
{
    cout << "Enter name: ";
    string name;
    cin >> name;

    cout << "Enter count: ";
    int count;
    cin >> count;

    printName(name, count);
}