#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <cstring>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(true)
    {
        int n;
        cin >> n;

        if(n == 0)
        {
            break;
        }

        vector<long long int> height(n);
        long long int max_area = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> height[i];
        }

        deque<int> dq;

        for(int i = 0; i <= n; i++)
        {
            long long int current = (i == n) ? 0 : height[i]; // 이걸 추가해야 비워진다...

            while(!dq.empty() && height[dq.back()] > current)
            {
                long long int h = height[dq.back()];
                dq.pop_back();

                long long int width = 0;

                if(dq.empty())
                {
                    width = i;
                }
                else
                {
                    width = i - dq.back() - 1;
                }

                max_area = max(max_area, h * width);
            }

            dq.push_back(i);
        }

        cout << max_area << '\n';

    }

    return 0;
}
