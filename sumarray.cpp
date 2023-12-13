#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("sumarray.inp", "r", stdin);
    freopen("sumarray.out", "w", stdout);
    cin >> n;
    long long a[n+5];
    long long res = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        res += a[i];
    }
    cout << res;
    return 0;
}
