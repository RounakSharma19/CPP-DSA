// Find the smallesta and second smallest element in array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // dynamic array creation and this will use heap memory becoz we are using new keyword
    int *const arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int first_min_ele = INT_MAX;
    int second_min_ele = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first_min_ele)
        {
            second_min_ele = first_min_ele;
            first_min_ele = arr[i];
        }
        else if (arr[i] < second_min_ele && arr[i] > first_min_ele)
        {
            second_min_ele = arr[i];
        }
    }

    cout << first_min_ele << " ";
    cout << second_min_ele << " ";
    // to delete the size from heap
    delete[] arr;

    return 0;
}