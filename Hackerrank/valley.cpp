#include<iostream>
#include<vector>
using namespace std;
int sol(vector<char> &a,int n)
{
    int cval=0;
    int olcval=cval;
    int valley=0;
    for(auto i : a)
    {
        olcval=cval;
        if(i=='D')
        {
            cval--;
        }
        else
        {
            cval++;
        }
        if(olcval>=0 && cval<0)valley++;

    }
    return valley;


}

int main()
{
    int n;
    vector<char> ip;
    cin>>n;
    char tmp;
    for(int i=1;i<=n;i++){
    cin>>tmp;
    ip.push_back(tmp);

    }
    cout<<sol(ip,n);
}