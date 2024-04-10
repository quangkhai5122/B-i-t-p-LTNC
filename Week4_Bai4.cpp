#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<utility>
#include<map>
using namespace std;

map <pair<int,int>,int> mp;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,x,y,k;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>x;
            mp[{i,j}]=x;
        }

    }
    for(int i=0;i<q;i++ )
    {
        cin>>x>>y;
        cout<<mp[{x,y}]<<endl;
    }
    return 0;
}
