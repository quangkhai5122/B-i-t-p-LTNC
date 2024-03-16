#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a;
    cin >> a;
    char M[a][a];
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<a ; j++){
            if (i+j<a-1)
                M[i][j]=' ';
            else if (i+j >=(a-1))
                M[i][j]='#';
        }
    }
    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<a ; j++){
            cout << M[i][j];
        }
        cout << endl;
    }
}
