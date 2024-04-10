#include<bits/stdc++.h>

using namespace std;


int main() {
   int n;
    cin >> n;
    int a[n],b[n+1];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<=n;i++){
        cin >> b[i];
    }
    for(int i=0;i<n+1;i++){
        int flag=1;
        for(int j=0;j<n;j++){
            if(b[i]==a[j]){
                flag = 0;
            }
        }
        if(flag==1){
            cout << b[i];
        }
    }
}
