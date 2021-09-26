#include <iostream>

using namespace std;
int main() {
  int n1, n2;
  cin >> n1 >> n2;

  int maxn = max(n1,n2);
  int maxh = max(n1,n2) %4;
  int minn = min(n1,n2);
  int minh = min(n1,n2) %4;
  if (maxh == 0){
    maxh = 4;
  }
  if(minh == 0){
    minh = 4;
  }
  // cout << maxh << " " << minh;
  int v = (maxn-minn) / 4;
  int h = (maxh > minh) ? maxh-minh : minh-maxh;
  if(maxh < minh) v+= 1;

  cout << v + h;
  
}