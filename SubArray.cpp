#include<iostream>
#include<vector>
using namespace std;
struct window
{
    int start,end;
    int sum;
};

void solve(){
    int N;
    cin >> N;
    int SUM ;
    cin >> SUM;
    vector<int> arr(N);
    for(int i = 0; i< N; i++){
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    
    //calculate the subarray using window approach
    window win;
    win.start = win.end = 0;
    win.sum = arr[0];

    for (int i = 1; i< N; i++){
        if(win.sum == SUM){
            break;
        }
        else{
            win.sum+= arr[i];
            win.end++;
            if(win.sum > SUM){
                win.sum-=arr[win.start];
                win.start++;

            }
        }
    }

    if(win.sum == SUM) {
        cout << win.start << " "<< win.end<<endl;
    }
    else {
        cout << -1;
    }



    
}
int main()
{
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}