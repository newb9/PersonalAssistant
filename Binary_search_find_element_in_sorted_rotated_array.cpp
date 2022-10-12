#include <bits/stdc++.h>
using namespace std;
int find_elemnt_in_roatated_sorted_array(int arr[], int n, int element)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int next = (mid + 1) % n;
        if (arr[mid] == element)
            return mid;
        else if (element >= arr[start] && element <= arr[mid])
        {
            end = mid;
        }
        else if (element >= arr[next] && element <= arr[n - 1])
        {
            start = next;
        }
        else
            return -1;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int element;
    cin >> element;
    int ans = find_elemnt_in_roatated_sorted_array(arr, n, element);
    cout << ans;
    return 0;
}