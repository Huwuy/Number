#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("waterfill.inp", "r", stdin);
    freopen("waterfill.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    double a[n+5];
    double f[n+5];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    f[1] = a[1] / k;
    double res = f[1];
    for(int i = 2; i <= n; i++)
    {
        f[i] = f[i-1] + (a[i] - f[i-1]*k) / (k*i);
        res = max(res, f[i]);
    }
    cout << long(ceil(res));
    return 0;
}
