// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n);

int main() {
    // your code goes here
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << maxLen(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
int maxLen(int arr[], int N) {
    unordered_map<int,int> hmap;
    // Your code here
    int sum_arr[6];
    sum_arr[0] = arr[0]?1:-1;
    for(int i = 1;i<N;i++){
        int temp = arr[i]?1:-1;
        sum_arr[i] = sum_arr[i-1] + temp;
        
    }
    int max_len = 0;
    for(int i = 0; i< N;i++){
        if(sum_arr[i] == 0){
            max_len = i+1;
        }
        if(hmap[sum_arr[i]]){
            int var = hmap[sum_arr[i]];
            var = i + 1 - var;
            max_len = max_len < var ? var : max_len;
        }
        else{
            hmap[sum_arr[i]] = i+1;
        }
    }
    return max_len;
}

