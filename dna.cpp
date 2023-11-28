#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("dna.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    string s;
    cin >> s;
    int n;
    cin >> n;
    int x = 0;
    bool check = true;
    while(n--)
    {
        string t;
        cin >> t;
        x++;
        if(s.length() != t.length())
        {
            n -=1;
            check = false;
        }
        else
        {
            check = true;
            int cnt = 0;
            for(int i = 0; i < s.length(); i++)
                if(s[i] != t[i]) cnt++;
            if(cnt <= 2)
                cout << x << endl;
        }
    }
        if(!check) cout << '0';
    return 0;
}
