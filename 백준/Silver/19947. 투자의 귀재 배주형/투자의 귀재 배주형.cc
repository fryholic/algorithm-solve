#include <iostream>
#include <vector>
#include <algorithm> // std::max 사용

int main() {
    int H, Y;
    std::cin >> H >> Y;

    // dp 배열 초기화 (Y+1 크기)
    std::vector<int> dp(Y + 1, 0);
    dp[0] = H; // 초기 자산 설정

    // 1년부터 Y년까지 순회
    for (int i = 1; i <= Y; i++) {
        // A 방식: 1년 전 자산에 5% 이율 적용
        int temp = dp[i - 1] + (dp[i - 1] * 5) / 100;

        // B 방식: 3년 전 자산에 20% 이율 적용 (i >= 3)
        if (i >= 3) {
            temp = std::max(temp, dp[i - 3] + (dp[i - 3] * 20) / 100);
        }

        // C 방식: 5년 전 자산에 35% 이율 적용 (i >= 5)
        if (i >= 5) {
            temp = std::max(temp, dp[i - 5] + (dp[i - 5] * 35) / 100);
        }

        dp[i] = temp; // i년 최대 자산 저장
    }

    // 결과 출력
    std::cout << dp[Y] << std::endl;

    return 0;
}