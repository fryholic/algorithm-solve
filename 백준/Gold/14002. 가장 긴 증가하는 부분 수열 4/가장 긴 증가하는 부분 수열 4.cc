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

    int N;
    cin >> N;

    if(N == 0)
    {
        cout << 0 << '\n';
        return 0;
    }

    vector<int> arr(N);
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    vector<int> dp;
    vector<int> LIS;
    vector<int> index(N);

    LIS.push_back(arr[0]);
    index[0] = 0;

    for(int i = 1; i < N; i++)
    {
        if(arr[i] > LIS.back())
        {
            LIS.push_back(arr[i]);
            index[i] = LIS.size() - 1;
        }
        else
        {
            auto it = lower_bound(LIS.begin(), LIS.end(), arr[i]);
            *it = arr[i];
            index[i] = distance(LIS.begin(), it);
        }
    }

    int len = LIS.size();
    cout << len << '\n';

    // 여기까지는 맞다 이거임... 이제 LIS를 어떻게든 해야 함

    int target = len - 1;

    for(int i = N - 1; i >= 0; i--)
    {
        if(index[i] == target)
        {
            dp.push_back(arr[i]);
            target--;
        }
    }

    for(int i = dp.size() - 1; i >= 0; i--)
    {
        cout << dp[i] << ' ';
    }

    cout << '\n';

    return 0;
}