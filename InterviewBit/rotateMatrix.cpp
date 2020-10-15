#include <bits/stdc++.h> 
using namespace std;
void rotate(vector<vector<int> > &A) {
    
    int len =A.size();
    for(int i =0; i<len/2;i++){
        for(int j = i; j< len - i- 1;j++){
            swap(A[i][j],A[len-j-1][i]);
            swap(A[len-j-1][i],A[len-i-1][len-j-1]);
            swap(A[j][len-i-1],A[len-i-1][len-j-1]);
        }
    }
}
