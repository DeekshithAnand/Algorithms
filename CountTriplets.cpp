// Count the triplets
// https://practice.geeksforgeeks.org/problems/count-the-triplets/0

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve()
{
    int triplets_count = 0;
    int N;
    vector<int> arr;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    for (int i = N - 1; i > 1; i--)
    {
        int j = 0, k = i - 1;
        while (j != k && (j < k))
        {
            int sum = arr[j] + arr[k];
            if (sum == arr[i])
            {
                triplets_count++;
                j++;
                k--;
            }
            else if (sum > arr[i])
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    triplets_count = triplets_count == 0 ? -1 : triplets_count;
    cout << triplets_count << endl;
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