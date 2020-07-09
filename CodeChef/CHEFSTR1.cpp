#include <iostream>
#define ll long long
using namespace std;
int solve(ll arr[], int N)
{
    ll count = 0;
    for (int i = 0; i < N - 1; i++)
    {
        count += abs(arr[i] - arr[i + 1]);
    }
    return count - N +1;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        ll arr[10];
        cin >> N;
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        cout << solve(arr, N) << endl;
    }
    return 0;
}