#include "../pname.h"
#include<vector>
#include<algorithm>
void isort(vector<int> &arr)
{
    int limit=arr.size();
    for(int i = 1; i < limit ;i++)
    {
        for(int j = i; j>0 ; j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }

        }
    }
}
//driver code
int main(int argc, char const *argv[])
{
    cout<<"Enter size:"<<endl;
    int tmp;
    int ele;
    vector<int> a;
    cin>>tmp;
    for(int i=0;i<tmp;i++)
    {
        cin>>ele;
        a.push_back(ele);

    }
    isort(a);
    //display
    for(int i=0;i<tmp;i++)
    {
       
        {
            cout<<a[i]<<endl;
        }
    }

    return 0;
}
