#include <bits/stdc++.h>

using namespace std;

class Student
{
private:
    int examscore[5];
public:
    void Scoreinput()
    {
        for(int i=0; i<5; i++)
        {
            cin >> examscore[i];
        }
    }
    int Totalscore()
    {
        int sum=0;
        for(int i=0; i<5; i++)
        {
            sum += examscore[i];
        }
        return sum;
    }

};

int main()
{
    int q;
    cin >> q;
    Student *sv = new Student[q];
    for(int i=0 ;i<q; i++)
    {
        sv[i].Scoreinput();
    }
    int kristenmark = sv[0].Totalscore();
    int dem=0;
    for(int i=1; i<q; i++)
    {
        int svmark = sv[i].Totalscore();
        if(svmark > kristenmark)
        {
            dem++;
        }
    }
    delete[] sv;
    cout << dem << "\n";
}

