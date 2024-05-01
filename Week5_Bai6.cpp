#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int> table;
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        string name;
        int opt, mark;
        cin >> opt >> name;
        if(opt==1)
        {
            cin >> mark;
            table[name] += mark;
        }
        else if(opt==2)
        {
            table.erase(name);
        }
        else if(opt==3)
        {
            cout << table[name] << endl;
        }
    }
}
