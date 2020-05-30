// Equilibrium point
// https://practice.geeksforgeeks.org/problems/equilibrium-point/0
#include <iostream>
using namespace std;
void solve()
{
    int N, arr[1000001];
    cin >> N;
    long int Tsum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        Tsum += arr[i];
    }
    long int lsum = 0, rsum = Tsum - arr[0];
    int index = 0;

    if (lsum == rsum)
    {
        cout << index + 1 << "\n";
        return;
    }

    for (int i = 1; i < N; i++)
    {
        lsum += arr[i - 1];
        rsum = rsum - arr[i];
        if (lsum == rsum)
        {
            index = i;
            break;
        }
    }
    int res = lsum == rsum ? index + 1 : -1;
    cout << res << "\n";
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