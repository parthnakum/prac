#include <iostream>
#include <vector>
using namespace std;

int sum(int n, const vector<int> &arr)
{
    if (n == 0)
    {
        return 0;
    }
    return arr[n - 1] + sum(n - 1, arr);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "SUM: " << sum(n, arr);
}
