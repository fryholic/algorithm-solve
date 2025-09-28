#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>

using namespace std;

void hilbert(int n, int m, int &x, int &y) {
    x = 0;
    y = 0;
    int t = m - 1;
    for (int s = 1; s < n; s *= 2) {
        int rx = 1 & (t / 2);
        int ry = 1 & (t ^ rx);
        // rotate
        if (ry == 0) {
            if (rx == 1) {
                x = s - 1 - x;
                y = s - 1 - y;
            }
            // swap x and y
            int tmp = x;
            x = y;
            y = tmp;
        }
        x += s * rx;
        y += s * ry;
        t /= 4;
    }
    // 좌표는 (1,1)부터 시작
    x++;
    y++;
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int x, y;
    hilbert(n, m, x, y);
    cout << x << " " << y << "\n";
    
    return 0;
}