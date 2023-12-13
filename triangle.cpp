#include<bits/stdc++.h>
using namespace std;

long long a, b, c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("triangle.inp", "r", stdin);
    freopen("triangle.out", "w", stdout);
    cin >> a >> b >> c;
    long long cc1, cc2;
    long long ch = max({a, b, c});
    if(ch == a)
        cc1 = b, cc2 = c;
    if (ch == b)
        cc1 = a, cc2 = c;
    if( ch == c)
        cc1 = a, cc2 = b;

    if(cc1 + cc2 < ch)
    {
        cout << 0;
        return 0;
    }
    else
    {
        if(cc1*cc1 + cc2*cc2 == ch*ch)
            cout << 2;
        else if(cc1*cc1 + cc2*cc2 < ch*ch)
            cout << 3;
        else
            cout << 1;
    }
    return 0;
}
