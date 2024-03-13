#include <bits/stdc++.h>
using namespace std;
int backDigits (int n)
{
    int Count=0;
    int m=n;
    while (m>0)
    {
        int n1=m%10;
        if(n1!=0){
            if(n%n1==0)
                Count++;}
        m/=10;
    }
    return Count;
}
int main()
{
    int n;
    cin >> n;
    int M[n];
    for (int i=0 ; i<n ; i++)
    {
        cin >> M[i];
    }
    for (int i=0 ; i<n ; i++)
    {
        cout << backDigits(M[i])<<endl;
    }
}
