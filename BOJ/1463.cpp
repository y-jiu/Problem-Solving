#include <iostream>

using namespace std;
int x;
int arr[1000001];

int dp(int x){
  arr[1] = 0;
  for(int i = 2;i <= x;i++){
    arr[i] = arr[i-1]+1;
    if(i%2 == 0) arr[i] = min(arr[i],arr[i/2]+1);
    if(i%3 == 0) arr[i] = min(arr[i],arr[i/3]+1);
  }
  return arr[x];
}

int main() {
  cin >> x;
  for( int i = 0 ; i<=x ; i++){
    arr[i] = x+1;
  }
  
  cout << dp(x);
}