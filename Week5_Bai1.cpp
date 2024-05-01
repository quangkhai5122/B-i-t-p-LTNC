#include <bits/stdc++.h>
using namespace std;
void update(int*a, int*b)
{
    int tmp = *a;
    *a = *a + *b;
    *b = abs(tmp - *b);
}
int main()
{
    int a,b; cin >> a >> b;
    update(&a , &b);
    cout << a << " " << b;
}
