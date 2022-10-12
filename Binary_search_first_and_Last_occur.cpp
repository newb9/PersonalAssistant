#include <iostream>
using namespace std;
int first_occurence(int arr[], int n, int element)
{
    int start = 0;
    int end = n - 1;
    int res = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (element == arr[mid])
        {
            res = mid;
            end = mid - 1;
        }
        else if (element < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return res;
}
int last_occurence(int arr[], int n, int element)
{
    int start = 0;
    int end = n - 1;
    int res1 = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == element)
        {
            res1 = mid;
            start = mid + 1;
        }
        else if (element < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return res1;
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

    int first = first_occurence(arr, n, element);
    int last = last_occurence(arr, n, element);
    cout << "first occurence is " << first << endl
         << "last occurence is " << last << endl;
    
    cout << "The number of times element preent is " << last - first + 1;
    return 0;
}