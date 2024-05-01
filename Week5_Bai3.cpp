#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    vector <int> v(n);
    for (int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    int pos_erase, index1, index2;
    cin >> pos_erase >> index1 >> index2;
    v.erase(v.begin() + pos_erase-1);
    v.erase(v.begin()+index1-1,v.begin()+index2-1);
    int m = n-1-(index2-index1); cout << m << endl;
    for (int i=0 ; i<m ; i++){
        cout << v[i] << " ";
    }
    return 0;
}
