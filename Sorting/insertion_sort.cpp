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
#define repr(a,b,c) for(int a =b ;a>c;a--)
void isort(vi &a){
    int limit=a.size();
    int key;
    rep(i,1,limit){
        key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            --j;

        }
        a[j+1]=key;

    }
}

int main(int argc, char const *argv[])
{
    vi a;
    repr(i,10,0){
    a.pb(i);}
    isort(a);
    for(auto i:a)cout<<i<<" "<<endl;
    return 0;
}

