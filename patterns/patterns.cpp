#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int print = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << print << " ";
            print++;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int print = 1;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << print << " ";
            print++;
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = n - i + 1; j <= n + i - 1; j++)
        {
            cout << "*";
        }
        for (int j = n + i - 1; j <= 2 * n - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int i, j, n;
    n = 5;
    pattern1(n);
    /**
     Output:
     * * * * *
     * * * * *
     * * * * *
     * * * * *
     * * * * *
     */

    pattern2(n);
    /**
     Output:
     *
     * *
     * * *
     * * * *
     * * * * *
     */

    pattern3(n);
    /**
     Output:
     *
     * 1
     * 12
     * 123
     * 1234
     * 12345
     */

    pattern4(n);
    /*
    Output:
    1
    22
    333
    4444
    55555
    */

    pattern5(n);
    /*
    Output:
    * * * * *
    * * * *
    * * *
    * *
    *
    */

    pattern6(n);
    /*
    Output:
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    */

    pattern7(n);
    /*
    Output:
        *
       ***
      *****
     *******
    *********
    */

    return 0;
}