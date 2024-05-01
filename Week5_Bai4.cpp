#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    vector <int> v(n);
    for (int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    int Q; cin >> Q;
    while(Q--){
        int Y; cin >> Y;
        for (int i=0 ; i<n ; i++){
            if(v[i] == Y) {cout << "Yes " << i+1 << endl; break;}
            else if (v[i] > Y) {cout << "No " << i+1 << endl; break;}
        }
    }
    return 0;
}
