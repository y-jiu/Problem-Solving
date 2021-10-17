#include <iostream>
#include <algorithm>
using namespace std;
bool desc(int a, int b){ return a > b; }

int main() {
  int n;
  cin >> n;
  int a[n];
  int b[n];

  for(int i = 0 ; i < n ; i++){
    cin >> a[i];
  }
  for(int i = 0 ; i < n ; i++){
    cin >> b[i];
  }

  sort(a, a+n);

  sort(b, b+n, desc);

  int p = 0;
  for(int i = 0 ; i< n ; i++){
    int temp = a[i]*b[i];
    p += temp;
  }
  cout << p;


}