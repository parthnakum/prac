#include <iostream>
#include <vector>
using namespace std;

void reverseAnArray(vector<int> &arr, int left, int right)
{
    if (left >= right)
    {
        return;
    }
    swap(arr[left], arr[right]);
    reverseAnArray(arr, left + 1, right - 1);
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

    reverseAnArray(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}