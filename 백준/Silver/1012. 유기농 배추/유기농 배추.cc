#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        int M, N, K;
        cin >> M >> N >> K;
        vector<vector<int>> field(N, vector<int>(M, 0));
        
        for (int i = 0; i < K; ++i) {
            int X, Y;
            cin >> X >> Y;
            field[Y][X] = 1;
        }
        
        int count = 0;
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        
        for (int y = 0; y < N; ++y) {
            for (int x = 0; x < M; ++x) {
                if (field[y][x] == 1) {
                    queue<pair<int, int>> q;
                    q.push({x, y});
                    field[y][x] = 0;
                    
                    while (!q.empty()) {
                        auto current = q.front();
                        q.pop();
                        
                        for (int i = 0; i < 4; ++i) {
                            int nx = current.first + dx[i];
                            int ny = current.second + dy[i];
                            
                            if (nx >= 0 && nx < M && ny >= 0 && ny < N && field[ny][nx] == 1) {
                                q.push({nx, ny});
                                field[ny][nx] = 0;
                            }
                        }
                    }
                    count++;
                }
            }
        }
        cout << count << '\n';
    }
    return 0;
}