#include<iostream>
#include<vector>
using namespace std;
//bubble sort main logic
void bsort(vector<int> &a,int &maxsize)
{
    for(int i=0;i<maxsize-1;i++)
    {
        for(int j=0;j<maxsize-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }


}
void getinput(vector<int> &v, int &maxsize)
{
    cout<<"Enter Number of elements:";
    cin>>maxsize;
    int ele;
    cout<<"Enter Elements:";
    for(int i=0;i<maxsize;i++)
    {
        cin>>ele;
        v.push_back(ele);
    }
}

void output(vector<int> &v)
{
    cout<<"Sorted Array:";
    for(auto i=v.begin();i<v.end();i++)
    cout<<*i<<" ";
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    vector<int> v;
    int maxsize;

    getinput(v,maxsize);
    bsort(v,maxsize);
    output(v);
    return 0;
}
