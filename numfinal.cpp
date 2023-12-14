#include<bits/stdc++.h>
using namespace std;

long long a, n;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("numfinal.inp", "r", stdin);
    freopen("numfinal.out", "w", stdout);

    cin >> a >> n;
    if(n % 4 == 0)
        n = 4;
    else
        n %= 4;
    cout << (long long)pow(a,n) % 10;
    return 0;
}
