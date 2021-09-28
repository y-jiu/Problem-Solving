#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n;
  cin >> n;
  int house[n];
  for(int i = 0 ; i < n ; i++){
    int temp;
    cin >> temp;
    house[i] = temp;
  }
  sort(house, house+n);
  int center = n%2 == 0 ? n/2 -1 : n/2;
  cout << house[center];

}