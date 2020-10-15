#include <bits/stdc++.h>
using namespace std;

int maxArr(vector<int> &A)
{
    int max = -1;
    int len = A.size();
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            int tmp = abs(A[i] - A[j]) + abs(i - j);
            max = tmp > max ? tmp : max;
        }
    }
    return max;
}
