#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// int dx[] = { 0, 0, 1, -1 };
// int dy[] = { 1, -1, 0, 0 };

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };


int dp[505][505];
int arr [505][505];
bool check [505][505];
int n;
int m;
int sol = 0;

int dfs(int x, int y){

  if(dp[x][y] != -1) return dp[x][y];
  if(x < 0 && y < 0 && x >= n && y >= n ) return 0;
  if(x == 0 && y == 0 ) return 1;
  dp[x][y] = 0;
  for (int i = 0; i < 4;i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(arr[nx][ny] > arr[x][y]) {
      dp[x][y] += dfs(nx,ny);
    }
  }
  return dp[x][y];
}

int main() {
  cin >> n;
  cin >> m;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      int t;
      cin >> t;
      arr[i][j] = t;
    }
  }

  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      dp[i][j] = -1;
    }
  }

  cout << dfs(n-1,m-1);

  
}