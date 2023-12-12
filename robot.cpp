#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("robot.inp", "r", stdin);
    freopen("robot.out", "w", stdout);
    int x1, x2, y1, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    long long res = 0;
    if (abs(x1+y1) == abs(x2+y2) || abs(x1-y1) == abs(x2-y2))
        res = abs(x1 - x2);
    else if(x1 == x2)
        res = abs(y1 - y2);
    else if(y1 == y2)
        res = abs(x1 - x2);
    else
        res = max(abs(x1-x2),abs(y1 - y2));
    cout << res;
    return 0;
}
