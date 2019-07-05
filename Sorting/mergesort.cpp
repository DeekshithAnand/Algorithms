#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define lli long long int
#define li long int
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define rep(a,b,c)  for(int a=b;a<c;a++)
#define repr(a,b,c) for(int a =b ;a>c;a--)-)

void merge(vi &arr,int l,int m,int n){

    


}

void msort(vi &arr,int l,int n){
    if(l<=n)
    {
        int m=(l+n)/2;
        msort(arr,l,n);
        msort(arr,m+1,n);
        merge(arr,l,m,n);
    }
}

int main(int argc, char const *argv[])
{

    return 0;
}

