#include <iostream>
using namespace std;
void solve(int m, int n)
{
    int res = 0;
    char a[101], b[101];
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    int arr[101][101] = {0};
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                arr[i][j] = 0;
            }
            else
            {
                if (a[i] == b[j])
                {
                    arr[i][j] = 1 + arr[i - 1][j - 1];
                    res = (res < arr[i][j]) ? arr[i][j] : res;
                }
                else
                {
                    arr[i][j] = 0;
                }
            }
        }
    }
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //code
    int T;
    cin >> T;
    while (T--)
    {
        int m, n;
        cin >> m >> n;
        solve(m, n);
    }
    return 0;
}