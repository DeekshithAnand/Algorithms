#include<iostream>
using namespace std;
int sol(int a[],int n)
{
    int c[101]={0};
    for(int i=1;i<=n;i++){
    c[a[i]]++;
    }

    int ans=0;
    for(auto i=1;i<=101;i++)
    {
        if(c[i])
        {
            ans+=(c[i]/2);
        }
    }

    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[101];
    
    for(int i=1;i<=n;i++){cin>>a[i];

    
    }

    cout<<sol(a,n)<<endl;
}