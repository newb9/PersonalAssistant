#include <iostream>
using namespace std;
int Times_sorted_array_rotated(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int prev = (mid + n - 1) % n;
        int next = (mid + 1) % n;
        if (arr[mid] <= arr[prev] && arr[mid] <= arr[next])
            return mid;
        else if (arr[mid] >= arr[prev] && arr[mid] >= arr[next])
            return (mid + 1);
        else if (arr[mid] >= arr[prev] && arr[mid] <= arr[next])
            start = mid + 1;
        else
            end = mid - 1;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = Times_sorted_array_rotated(arr, n);
    cout << "the min ele index is " << ans << endl;
    cout << "No. of times array rotated is " << n - ans;

    return 0;
}