#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("demso.inp", "r", stdin);
    freopen("demso.out", "w", stdout);

    int a, b, c;
    cin >> a >> b >> c;
    cout << b/c - (a-1)/c;
    return 0;
}
