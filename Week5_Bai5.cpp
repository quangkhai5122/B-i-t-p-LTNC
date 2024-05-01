#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> balo;
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        int act, num;
        cin >> act >> num;
        if(act == 1)
        {
            balo.insert(num);
        }
        else if (act == 2)
        {
            balo.erase(num);
        }
        else
        {
            set<int>::iterator res = balo.find(num);
            if(res != balo.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }

    }
}
