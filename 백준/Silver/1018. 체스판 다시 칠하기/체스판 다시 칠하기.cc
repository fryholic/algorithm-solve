#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;




int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
        
    int N, M;
    cin >> N >> M;

    string board[50];

    for (int i = 0; i < N; i++) {
        cin >> board[i];
    }

    int ans = 65;

    string temp1[8] = { "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW" };
    string temp2[8] = { "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB" };

    

    for (int i = 0; i < N - 7; i++) {
        for (int j = 0; j < M - 7; j++) {

            int temp1_count = 0;
            int temp2_count = 0;

            for (int k = 0; k < 8; k++) {
                for (int l = 0; l < 8; l++) {
                    if (board[i + k][j + l] != temp1[k][l]) {
                        temp1_count++;
                    }

                    if (board[i + k][j + l] != temp2[k][l]) {
                        temp2_count++;
                    }
                }
            }
            
                if (temp1_count > temp2_count) {
                    if (temp2_count <= ans) {
                        ans = temp2_count;
                    }
                }
                else {
                    if (temp1_count <= ans) {
                        ans = temp1_count;
                    }
                }
            
        }
    }

    
    
    cout << ans;

    return 0;

}