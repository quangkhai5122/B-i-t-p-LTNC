#include <iostream>

using namespace std;

int main()
{
    int a,b;
    string s;
    cin >> a >> s >> b;
    for (int i=0 ; i<a ; i++){
        if ((s[i]>='a'&&s[i]<=('z'-b)) || (s[i]>='A'&&s[i]<=('Z'-b)))
            s[i]+=b;
        else if (s[i]>('z'-b)){
            int a=b-('z'-s[i])-1;
            s[i]='a'+a;
        }
        else if (s[i]>('Z'-b)){
            int a=b-('Z'-s[i])-1;
            s[i]='A'+a;
        }
    }
    cout << s;
}
