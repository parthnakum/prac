#include <iostream>
using namespace std;

string reverseStringMethod1(const string &str, int n)
{
    if (n == 0)
    {
        return "";
    }

    return str[n - 1] + reverseStringMethod1(str, n - 1);
}

void reverseStringMethod2(string &str, int left, int right)
{
    if (left >= right)
    {
        return;
    }
    swap(str[left], str[right]);
    return reverseStringMethod2(str, left + 1, right - 1);
}

int main()
{
    string str;
    cin >> str;

    cout << reverseStringMethod1(str, str.length()) << endl;

    reverseStringMethod2(str, 0, str.length() - 1);
    cout << str;
}