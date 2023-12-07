#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int k;

    if(b <= 12)
    {
        if(b - a <= 4)
            k = (b - a)*6;
        else
            k = 4*6 + (b-a-4)*3;
    }
    if(a >= 12)
    {
        if(b - a <= 4)
            k = (b-a)*10;
        else
            k = 4*10 + (b-a-4)*5;
    }
    if(a < 12 && b > 12)
    {
        if(b - a <= 4)
            k = (b - 12)*10 + (12 - a)*6;
        else
        {
            if(a + 4 <= 12)
                k = 4*6 + (12-(a+4))*3 + ((b - a -4)- (12-(a+4)))*5;
            else
            {
                int x = 12 - a;
                k = 6*x + (4-x)*10 + (b - a - 4)*5;
            }
        }
    }
    cout << k;
    return 0;
}
