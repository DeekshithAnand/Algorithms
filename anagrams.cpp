// Anagram 
// https://practice.geeksforgeeks.org/problems/anagram/0
#include <iostream>
using namespace std;
string isanagram(string s1, string s2)
{
    int arr[26] = {0};
    for (auto i : s1)
    {
        arr[i - 'a']++;
    }
    for (auto i : s2)
    {
        arr[i - 'a']--;
    }
    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            flag = false;
            break;
        }
    }

    string ans = flag == true ? "YES" : "NO";
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << isanagram(s1, s2) << endl;
    }
    return 0;
}