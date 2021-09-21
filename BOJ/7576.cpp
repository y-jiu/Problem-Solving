#include <iostream>
#include <queue>
using namespace std;
int ix,iy;
int arr[1001][1001];
int check[1001][1001];
int path[1001][1001];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
queue<pair<int,int>> q;

void bfs(){
  
while (!q.empty()){
  int x = q.front().first;
  int y = q.front().second;
  q.pop();
  for (int i = 0; i < 4;i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx >= 0 && ny >= 0 && nx < ix && ny < iy) {
      if(check[nx][ny] == 0 && arr[nx][ny] == 0){
        check[nx][ny] = true;
        q.push(make_pair(nx, ny));
        path[nx][ny] = path[x][y] +1;    
      }
    }
  }
  }
}

int main() {
  cin >> ix >> iy;
  for(int j = 0 ; j < iy ; j++){
    for(int i = 0 ; i < ix ; i++){
      int t;
      cin >> t;
      arr[i][j] = t;
      if(t == 1) {
        q.push(make_pair(i,j));
      }
    }
  }
  bfs();
  int ans = -1;
  for(int j = 0 ; j < iy ; j++){
    for(int i = 0 ; i < ix ; i++){
      if(arr[i][j] == 0 && path[i][j] == 0){
        cout << -1;
        return 0;
      }else if (path[i][j] > ans){
        ans = path[i][j];
      }
    }
  }
  cout << ans;
}