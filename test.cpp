//test file to test some codes!!!
#include<bits/stdc++.h>
using namespace std;
int main(const int argc ,char **argv)
{
    int arr[] = { 10, 20, 30, 40, 50 }; 
  
    // Print elements of array 
    cout << "Array contains :"; 
    for (int i = 0; i < 5; i++) 
        cout << " " << arr[i]; 
    cout << "\n"; 
  
    // using upper_bound 
    int upper1 = arr + 5 - upper_bound(arr, arr+5, 49); 
    int upper2 = upper_bound(arr, arr+5, 45) - arr; 
  
    cout << "\nupper_bound for element 35 is at position : " 
              << (upper1); 
    cout << "\nupper_bound for element 45 is at position : "
              << (upper2); 
  
    return 0; 
}

