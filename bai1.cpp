#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a*b) - (a*c + b*c - c*c);
    return 0;
}
