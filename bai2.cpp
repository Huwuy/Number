#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);
    int n, a;
    cin >> n >> a;
    cout << n + (n*(n-1)/2)*a;
    return 0;
}

