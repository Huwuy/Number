/* Một mảnh vườn hình chữ nhật có chiều dài và chiều rộng là 𝑎 và 𝑏. Người ta làm hai lối đi vào khu vườn, 
mỗi lối song song với một chiều của hình chữ nhật với độ rộng của cả hai lối đi đều bằng 𝑐 (phần ghạch chéo trong hình bên).
Cho các giá trị 𝑎,𝑏,𝑐. Hãy tính tổng diện tích phần còn lại của hình chữ nhật (phần trắng). */
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
