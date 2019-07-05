#include<iostream>
using namespace std;
int sol(short int a[],int n)
{
    int i=1;
    int jump=0;
    while(i<n)
    {
        if(a[i+2])
        {
            i+=1;
        }
        else
        {
            {
                i+=2;
            }
        }
        jump++;
    }
    return jump;
}
int main()
{
    int n;
    short int a[102];
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    cout<<sol(a,n);
}