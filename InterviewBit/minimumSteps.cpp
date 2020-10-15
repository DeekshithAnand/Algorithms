#include <bits/stdc++.h>
using namespace std;

inline int findDist(int x1, int y1, int x2, int y2)
{
    int a = abs(x1 - x2);
    int b = abs(y1 - y2);
    int c = a >= b ? a : b;
    return c;
}

int coverPoints(vector<int> &A, vector<int> &B)
{

    int len = A.size();
    int tcount = 0;
    for (int i = 0; i < len - 1; i++)
    {
        tcount += findDist(A[i], B[i], A[i + 1], B[i + 1]);
    }
    return tcount;
}
