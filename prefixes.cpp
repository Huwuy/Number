#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int n;
string s;
int c = 0;

void solve()
{
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'a' && s[i+1] == 'a')
        {
            s[i] = 'b';
             c++;
        }
        if(s[i] == 'b' && s[i+1] =='b')
        {
            s[i] = 'a';
            c++;
        }
    }
    cout << c << endl;
    cout << s;
}
int main()
{
    freopen("prefixes.inp", "r", stdin);
    freopen("prefixes.out", "w", stdout);
    cin >> n >> s;
    solve();
    return 0;
}
