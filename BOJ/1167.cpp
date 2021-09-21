#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

vector<pair<int, int>> tree[100005];
bool visit[100005];

int ans = 0;
int fn = 1;
void DFS(int s, int d){
  if(visit[s] == true) return;
  visit[s] = true;
  if( ans < d){
      ans = d;
      fn = s;
  }
  for(int i = 0 ; i < tree[s].size() ; i++){
    DFS(tree[s][i].first, d+ tree[s][i].second);
  }

}

int main() {
  int n;
  cin >> n;
  for(int i = 1 ; i <= n ; i++){
    
      int t,t1, t2;
      cin >> t;
      while(true){
        pair<int,int> p;
        cin >> t1;
        if(t1 == -1) break;
        cin >> t2;
        p.first = t1;
        p.second = t2; 
        tree[t].push_back(p);
      }
  }
  DFS(1,0);
  memset(visit, false, sizeof(visit));
  ans = 0;
  DFS(fn,0);
  cout << ans;

}