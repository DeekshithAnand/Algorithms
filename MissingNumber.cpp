// Missing number in array
// https://practice.geeksforgeeks.org/problems/missing-number-in-array/0

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void solve()
{
    int N;
    vector<int> arr;
    cin >> N;
    for (int i = 0; i < N-1; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int val1 = 0;
    for (auto i : arr)
    {
        val1 = i ^ val1;
    }
    int val2 = 0;
    for (int i = 1; i <= N; i++)
    {
        val2 = val2 ^ i;
    }
    cout << (val1 ^ val2) << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}