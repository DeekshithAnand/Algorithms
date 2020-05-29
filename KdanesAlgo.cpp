// Kadane's Algorithm
// https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
#include<iostream>
using namespace std;
void solve(){
    int N;
    cin>>N;
    int arr[10];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    
    int temp = arr[0];
    int g_max = temp;
    for(int i = 1; i<N;i++){
        temp = max(temp+arr[i],arr[i]);
        if(g_max < temp){
            g_max = temp;
        }

    }
cout<<g_max<<endl;
}
int main(){
    int T;
    cin >> T;
    while (T--)
    {           
        solve();
    }
    
    return 0;
}