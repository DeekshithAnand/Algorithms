// Count number of pairs where x^y > y^x for arrays x and y;
// https://practice.geeksforgeeks.org/problems/number-of-pairs/0/
#include <iostream>
#include <algorithm>
using namespace std;
int countOf(int x, int Y[], int NumOf[], int N)
{
    if (x == 0)
        return 0;
    if (x == 1)
        return NumOf[0];
    int *index = upper_bound(Y, Y + N, x);
    int ans = (Y + N) - index;
    ans += (NumOf[1] + NumOf[0]);
    if (x == 2)
    {
        return ans -= (NumOf[3] + NumOf[4]);
    }
    if (x == 3)
    {
        return ans += NumOf[2];
    }
    return ans;
}
void solve()
{
    int M, N;
    cin >> M >> N;
    int X[10], Y[10];
    for (int i = 0; i < M; i++)
    {
        cin >> X[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> Y[i];
    }
    sort(Y, Y + N);

    int count = 0;
    int NumCount[5] = {0};
    int index = 0;
    while (Y[index] < 5 && (index < N))
    {
        NumCount[Y[index]]++;
        index++;
    }

    for (int i = 0; i < M; i++)
    {
        count += countOf(X[i], Y, NumCount, N);
    }
    cout << count << "\n";
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