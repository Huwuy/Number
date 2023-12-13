#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a, n;

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
    cout << (ll)pow(a,n)%10;
    return 0;
}
