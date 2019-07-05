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

int partition(int a[],int l,int n,int m)
{
    while(l <= n){

        while(a[l] < a[m])
        l++;

        while(a[n] > a[m])
        n--;

        if(l<=n)
        {
            int tmp;
            tmp=a[l];
            a[l]=a[n];
            a[n]=tmp;
            l+=1;
            n-=1;
        }
    }
    return l;
}

void qsort(int a[],int l,int n)
{
    if(l > n)return;

    int m= (l+n)/2;
     int index= partition(a,l,n,m);
     qsort(a,l,index-1);
     qsort(a,index,n);

     
}

int main(int argc, char const *argv[])
{
    int a[6]={5,4,3,2,1};
    qsort(a,0,4);
    for(auto i:a)cout<<i;
    return 0;
}

