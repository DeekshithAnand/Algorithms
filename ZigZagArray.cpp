// Convert array into Zig-Zag fashion
// https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion/0
#include <iostream>
using namespace std;
void zigzag(int arr[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        if (i % 2)
        {
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        else
        {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int T, N;
    int arr[100000];
    cin >> T;
    while (T--)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        zigzag(arr, N);
        for (int i = 0; i < N; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}