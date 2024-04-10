#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int temp = 1;
    for (int i=0 ; i<s.length() ; i++){
        if (s[i] >= 'A' && s[i] <= 'Z')
            temp ++;
    }
    cout << temp;
}
