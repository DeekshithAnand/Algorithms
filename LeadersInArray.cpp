// Leaders in Array
// https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0
#include <iostream>
using namespace std;
void solve()
{
    int N;
    cin >> N;
    int arr[1000001];
    int res[1000001];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int max_so_far = arr[N - 1];
    int count = 0;
    res[count] = max_so_far;
    for (int i = N - 2; i >= 0; i--)
    {
        if (arr[i] >= max_so_far)
        {
            count++;
            res[count] = arr[i];
            max_so_far = arr[i];
        }
    }
    for (int i = count; i >= 0; i--)
    {
        cout << res[i] << " ";
    }
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}