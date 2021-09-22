#include <iostream>
#include <queue>
using namespace std;
int check[200001];
int start, dest;

queue<pair<int,int>> q;
void bfs(){

  while(!q.empty()){
    int x = q.front().first;
    int time = q.front().second;
    check[x] = true;
    q.pop();
    if(x == dest){
      cout << time;
      break;
    }
    int x1 = x*2;
    if(x1 <= 200000 && x1 >= 0 && check[x1] == false){
      q.push(make_pair(x1,time));
      check[x1] = true;
    }

    int x3 = x-1;
    if(x3 <=200000 && x3 >=0 && check[x3] == false){
      q.push(make_pair(x3, time+1));
      check[x3] = true;
    }
    int x2 = x+1;
    if(x2 <= 200000 && x2 >= 0 && check[x2] == false){
      q.push(make_pair(x2, time +1));
      check[x2] = true;
    }

  }
}
int main() {
  cin >> start >> dest;
    q.push(make_pair(start,0));
    bfs();
    return 0;
}