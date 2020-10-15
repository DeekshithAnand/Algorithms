#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &A)
{

    int len = A.size();
    int tmp = A[len - 1] + 1;
    A[len - 1] = tmp % 10;
    int carry = tmp / 10;
    for (int i = len - 2; i >= 0 && carry != 0; i--)
    {
        tmp = A[i] + carry;
        A[i] = tmp % 10;
        carry = tmp / 10;
    }
    if (carry)
    {
        A.insert(A.begin(), (carry % 10));
    }
    // remove all trailig zeros
    auto i = A.begin();
    while (i < A.end())
    {
        if (*i == 0)
        {
            A.erase(i);
        }
        else
        {
            break;
        }
    }
    return A;
}
