// Sort an array of 0s, 1s and 2s
// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
#include <iostream>
using namespace std;
inline void printNum(int count, int var)
{
    for (int i = 0; i < count; i++)
        cout << var << " ";
}
void solve()
{
    int N;
    cin >> N;
    int zero_count = 0, one_count = 0, two_count = 0;
    int temp;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        switch (temp)
        {
        case 0:
            zero_count++;
            break;
        case 1:
            one_count++;
            break;
        case 2:
            two_count++;
            break;
        }
    }

    printNum(zero_count, 0);
    printNum(one_count, 1);
    printNum(two_count, 2);
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