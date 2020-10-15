#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &A)
{

    int len = A.size();
    int i;
    for (i = len - 2; i >= 0; i--)
    {
        if (A[i] < A[i + 1])
            break;
    }
    if (i == -1)
    {
        reverse(A.begin(), A.end());
        return A;
    }

    reverse(A.begin() + i + 1, A.end());
    for (int j = i + 1; j <= len - 1; j++)
    {
        if (A[i] < A[j])
        {
            swap(A[i], A[j]);
            break;
        }
    }
    return A;
}
