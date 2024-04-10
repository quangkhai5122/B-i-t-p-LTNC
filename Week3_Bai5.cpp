#include <bits/stdc++.h>
using namespace std;

bool checkSubsequence (string s)
{
    string str = "hackerrank";
    int j = 0;
    for (int i=0 ; i<s.length() ; i++){
        if (s[i] == str[j]) j++;
    }
    if (j == str.length())
        return true;
    else
        return false;
}
int main()
{
    int T; cin >> T;
    string* arr = new string[T];
    for (int i=0 ; i<T ; i++){
        cin >> arr[i];
    }
    for (int i=0 ; i<T ; i++){
        if (checkSubsequence(arr[i]))
            cout << "YES" << endl;
        else
         cout << "NO" << endl;
    }
}
