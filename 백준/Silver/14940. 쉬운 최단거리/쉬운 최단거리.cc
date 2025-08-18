#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;

    cin >> n >> m;

    vector<vector<int>> graph(n, vector<int>(m));
    vector<vector<int>> visited(n, vector<int>(m, -1));

    pair<int, int> start;

    for(int i = 0; i < n; i++) // 행
    {
        for(int j = 0; j < m; j++) // 열
        {
            cin >> graph[i][j];
            if(graph[i][j] == 2)
            {
                start = {i, j}; // 행 , 열
            }
            if(graph[i][j] == 0)
            {
                visited[i][j] = 0; // 벽
            }
        }
    }

    queue<pair<int, int>> q; 

    int dx[] = {0, 0, 1, -1}; 
    int dy[] = {1, -1, 0, 0};

    q.push(start);
    visited[start.first][start.second] = 0; // 시작점

    while(!q.empty())
    {
        auto [y, x] = q.front(); // 행, 열
        q.pop();
        for(int i = 0; i < 4; i++) // 4방향
        {
            int nx = x + dx[i]; // 열
            int ny = y + dy[i]; // 행
            if(nx >= 0 && nx < m && ny >= 0 && ny < n)
            {
                if(graph[ny][nx] == 1 && visited[ny][nx] == -1)
                {
                    q.push({ny, nx}); // 행, 열
                    visited[ny][nx] = visited[y][x] + 1; 
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << visited[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}