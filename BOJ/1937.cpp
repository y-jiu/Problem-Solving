#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
int height[505][505];
int arr [505][505];
bool check [505][505];
int n;
int sol = 1;

void dfs(int x, int y){
  height[x][y] = 1;
  // int nx = 0, ny = 0;
  for (int i = 0; i < 4;i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(x >= 0 && y >= 0 && x < n && y < n && arr[nx][ny] > arr[x][y]) {
      if(check[nx][ny] == 0){
        check[nx][ny] = true;
        dfs(nx, ny);
      }
      height[x][y] = max(height[nx][ny] +1, height[x][y]);
    }
  }
  sol = max(sol, height[x][y]); 
}

int main() {


  cin >> n;
  for(int j = 0 ; j < n ; j++){
    for(int i = 0 ; i < n ; i++){
      int t;
      cin >> t;
      arr[i][j] = t;
    }
  }

  for(int j = 0 ; j < n ; j++){
    for(int i = 0 ; i < n ; i++){
      if(check[i][j]) continue;
      dfs(i,j);

    }
  }

  cout << sol;

  
}