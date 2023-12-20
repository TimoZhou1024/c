#include <bits/stdc++.h>
using namespace std;

int main()
{
    string op,s;
    cin >> op >> s;
    int cnt = 0;
    for(int i = 0; s[i]; ++i)
        if(s[i] == '1')
            cnt++;
    if(op == "E")
        cout << (cnt&1);
    else
        cout << !(cnt&1);
    return 0;
}