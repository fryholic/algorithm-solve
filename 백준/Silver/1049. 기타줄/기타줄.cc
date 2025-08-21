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

    int N, M; // N : 끊어진 기타줄의 개수, M : 기타줄 브랜드의 개수

    cin >> N >> M;

    vector<int> package_prices; // 패키지로 살 때의 가격
    vector<int> each_prices; // 낱개로 살 때의 가격

    for(int i = 0; i < M; i++)
    {
        int package, each; // 각 브랜드의 패키지 가격, 낱개 가격
        cin >> package >> each;
        package_prices.push_back(package);
        each_prices.push_back(each);
    }
    
    sort(package_prices.begin(), package_prices.end());
    sort(each_prices.begin(), each_prices.end());

    int min_package_price = package_prices[0]; // 가장 저렴한 패키지 가격
    int min_each_price = each_prices[0]; // 가장 저렴한 낱개 가격

    int total = 0;

    if(min_package_price < min_each_price * 6) // 패키지 가격이 낱개 6개 가격보다 저렴한 경우
    {
        total += (N / 6) * min_package_price; // 패키지로 구매
        N %= 6; // 남은 기타줄 개수
    }
    else // 낱개 6개 가격이 패키지 가격보다 저렴한 경우
    {
        total += N * min_each_price; // 낱개로 구매
        N = 0; // 모두 구매했으므로 남은 기타줄 개수는 0
    }

    // 패키지로 구매했을 때 남은 기타줄 처리
    // 남은 기타줄이 6개 미만인 경우
    // 1. 그래도 패키지로 사는 게 저렴하다
    if(N < 6)
    {
        if(min_package_price < min_each_price * N)
        {
            total += min_package_price;
        }
        else
        {
            total += N * min_each_price; // 2. 남은 건 낱개로 사는 게 저렴하다 || 패키지 가격 == 낱개 6개 가격
        }
    }
    cout << total << "\n";

    return 0;
}