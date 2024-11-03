#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isValid(int x, int y, int M, int N, vector<vector<int>>& grid, vector<vector<bool>>& visited) {
    return x >= 0 && x < M && y >= 0 && y < N && !visited[x][y] && grid[x][y] == 0;
}

int bfs(vector<vector<int>>& grid, int sourceX, int sourceY, int destX, int destY, pair<int, int> moveRule) {
    int M = grid.size();
    int N = grid[0].size();
    
    vector<pair<int, int>> directions = {
        {moveRule.first, moveRule.second},                   
        {moveRule.second, -moveRule.first},                 
        {-moveRule.second, moveRule.first},                 
        {-moveRule.first, -moveRule.second}                  
    };
    
    vector<vector<bool>> visited(M, vector<bool>(N, false));
    
    queue<pair<pair<int, int>, int>> q;
    q.push({{sourceX, sourceY}, 0});
    visited[sourceX][sourceY] = true;

    while (!q.empty()) {
        auto [cur, moves] = q.front();
        int curX = cur.first, curY = cur.second;
        q.pop();
        
        if (curX == destX && curY == destY) {
            return moves;
        }

        for (auto dir : directions) {
            int newX = curX + dir.first;
            int newY = curY + dir.second;
            
            if (isValid(newX, newY, M, N, grid, visited)) {
                visited[newX][newY] = true;
                q.push({{newX, newY}, moves + 1});
            }
        }
    }
  
    return -1;
}

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<int>> grid(M, vector<int>(N));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    int sourceX, sourceY;
    cin >> sourceX >> sourceY;

    int destX, destY;
    cin >> destX >> destY;

    int moveX, moveY;
    cin >> moveX >> moveY;
    pair<int, int> moveRule = {moveX, moveY};

    int result = bfs(grid, sourceX, sourceY, destX, destY, moveRule);

    cout << result;
    
    return 0;
}
