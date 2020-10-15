#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A)
{
    int min1 = INT_MAX;
    int max1 = INT_MIN;
    for (auto i : A)
    {
        min1 = min(i, min1);
        max1 = max(i, max1);
    }
    return max1 + min1;
}
