// Merge sorted array with using extra space

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
    int m,n;
    cin>>m>>n;
    int temp;
    int  arr1[1000000],arr2[1000000];
    for(int i =0;i<m;i++){
        cin>>arr1[i];

    }
    for(int i =0;i<n;i++){
        cin>>arr2[i];
    }
    int i=0,j=0;
    while(i < m && j <n){
        if(arr1[i]<arr2[j]){
            cout << arr1[i]<<" ";
            i++;
        }else{
            cout<<arr2[j]<<" ";
            j++;
        }

    }
    while(i < m){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j < m){
        cout<<arr2[j]<<" ";
        j++;
    }
    cout<<"\b"<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}