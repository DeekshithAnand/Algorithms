#include <iostream>
using namespace std;
long int merge(int arr[], int temp[], int l, int m, int r)
{
    int i, j, k;
    long int invCount = 0;
    i = l, j = m, k = l;
    while ((i <= m - 1) && (j <= r))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            invCount += (m - i);
            temp[k++] = arr[j++];
        }
    }
    while (i <= m - 1)
    {
        temp[k++] = arr[i++];
    }
    while (j <= r)
    {
        temp[k++] = arr[j++];
    }

    for (int i = l; i <= r; i++)
        arr[i] = temp[i];
    return invCount;
}

long int findCount(int arr[], int temp[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        long int invCount = 0;
        invCount += findCount(arr, temp, l, mid);
        invCount += findCount(arr, temp, mid + 1, r);
        invCount += merge(arr, temp, l, mid + 1, r);
        return invCount;
    }
    else
    {
        return 0;
    }
}
void solve()
{
    int temp[1000000];

    int arr[1000000];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    long int inversionCount = findCount(arr, temp, 0, N - 1);
    cout << inversionCount << "\n";
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