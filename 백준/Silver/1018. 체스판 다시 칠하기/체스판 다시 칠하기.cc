#include <iostream>
#include <algorithm>
using namespace std;
 
// 비교할 체스판 문양 2개를 미리 string 배열로 생성
string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};
 
// 입력받은 m*n 보드를 받기 위한 배열
string board[50];
 
int cntWB(int x, int y);
int cntBW(int x, int y);
 
int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    cin.tie(NULL);	// 입력과 출력 묶음을 풀기
 
    int n, m;
    cin >> n >> m;
    cin.ignore();
 
    for(int i=0; i<n; i++){
        getline(cin, board[i]);
    }
    int minVal = 65; // 8*8 칸 모두 다시 칠해도 64개
    
    for(int i=0; i+8 <= n; i++){
        for(int j=0; j+8 <= m; j++){
            int tmp = min(cntWB(i, j), cntBW(i, j));
            if(tmp < minVal) minVal = tmp;
        }
    }
    cout << minVal;
    return 0;
}
 
// W로 시작하는 체스판: 새로 칠해야 하는 칸 수 반환
int cntWB(int x, int y){
    int cnt = 0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(board[x+i][y+j] != WB[i][j]) cnt++;
        }
    }
    return cnt;
}
 
// B로 시작하는 체스판: 새로 칠해야 하는 칸 수 반환
int cntBW(int x, int y){
    int cnt = 0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(board[x+i][y+j] != BW[i][j]) cnt++;
        }
    }
    return cnt;
}