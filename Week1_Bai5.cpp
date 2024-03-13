#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int num[4] = {a,b,c,d};
    int max = 0;
    for (int i=0; i<4; i++){
        if (num[i]>max){
            max = num[i];
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << ans;

    return 0;
}
