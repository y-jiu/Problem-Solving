#include <iostream>
#include <string>
#include <vector>
using namespace std;

double arr[100001];
int main() {
  int n;
  cin >> n;
  
  for(int i = 0 ; i < n ; i ++){
    cin >> arr[i];
  }
  double ans = arr[0];
  for(int i = 1 ; i < n ; i++){
    if(arr[i] * arr[i-1] >= arr[i]){
      arr[i] = arr[i] * arr[i-1];
    }
    ans = max(ans,arr[i]);
  }
  printf("%.3f", ans);
}   