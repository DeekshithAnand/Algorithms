#include <iostream>
using namespace std;
void solve()
{
    int tl, arr[4];
    cin >> tl;
    for (int i = 1; i <= 3; i++)
        cin >> arr[i];
    int dp[4][tl];
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= tl; j++)
        {
            if (i == 0 || j == 0)
            {
                if (j == 0)
                {
                    dp[i][j] = 1;
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
            else if (arr[i] <= j)
            {
                // int p = (int)(1 & dp[i][j - arr[i]]);
                // dp[i][j] = max((p + dp[i][j - arr[i]]), dp[i - 1][j]);
                if (dp[i][j - arr[i]])
                {
                    if ((j - arr[i]) == 0)
                    {
                        dp[i][j] = max(1, dp[i - 1][j]);
                    }
                    else
                    {
                        dp[i][j] = max((1 + dp[i][j - arr[i]]), dp[i - 1][j]);
                    }
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[3][tl] << endl;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}