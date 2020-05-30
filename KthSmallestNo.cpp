// Kth Smallest Element using Quick Select
// https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
#include<iostream>
using namespace std;

int findK(int arr[],int l,int r){
    int pivot = arr[r];
    int j = l;
    for(int i = l;i<=r;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[j]);
            j++;
        }

    }
    return j-1;

}
void solve(){
    int N;int K;
    int arr[10];
    cin>>N;
    for(int i = 0;i<N;i++)
    cin >> arr[i];
    cin>>K;

    int index = findK(arr,0,N-1);
    while(true){
    if(index == K-1){
        cout<<arr[index]<<"\n";
        return;
    }
    else if(index < K-1){
        index = findK(arr,index+1,N-1);
    }
    else {
        index = findK(arr,0,index-1);
    }
    }

}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}