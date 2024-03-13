#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,c;
    cin >> n >> b;
    int M[n];
    for (int i=0 ; i<n ; i++){
        cin >> M[i];
    }
    for (int i=0 ; i<n ; i++){
        for (int j=i+1 ; j<n ; j++){
            if ((M[i]+M[j])%b==0)
                c++;
        }
    }
    cout << c;
}
