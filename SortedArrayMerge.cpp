// Merge 2 sorted array without extra space
// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays/0/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve()
{
    int M, N, temp;
    cin >> M >> N;
    int arr1[1000000], arr2[1000000];
    
    for (int i = 0; i < M; i++)
    {
        cin >>arr1[i];
        }

    for (int i = 0; i < N; i++)
    {
        cin>>arr2[i];
    }

    int i = M - 1, j = 0;

    while (i >= 0 && j < N)
    {
        if (arr1[i] > arr2[j])
        {
            swap(arr1[i], arr2[j]);
             i--;
        j++;
        }else break;
       
    }
    if(i!=M-1){
        sort(arr1, arr1+M);
    sort(arr2, arr2+N);
    }
    
    for (auto k : arr1)
    {
        cout << k << " ";
    }
    for (auto k : arr2)
    {
        cout << k << " ";
    }
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}