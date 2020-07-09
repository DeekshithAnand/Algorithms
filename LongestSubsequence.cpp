// Longest Common Subsequence
// https://practice.geeksforgeeks.org/problems/longest-common-subsequence/0
#include <iostream>
using namespace std;
int solve(string s1, string s2, int m, int n)
{
    int dp[101][101] = {0};
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
    }

    return dp[m][n];
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int m, n;
        cin >> m >> n;
        string s1, s2;
        cin >> s1 >> s2;
        cout << solve(s1, s2, m, n) << endl;
    }

    return 0;
}