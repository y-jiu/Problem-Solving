#include <iostream>

int n;
int arr[1001];
using namespace std;

void dp(int n){

  arr[1] = 1;
  arr[2] = 2;

  for (int i = 3 ; i <= n ; i++){
    arr[i] = (arr[i-1] + arr[i-2])%10007;
  }
}

int main() {

  cin >> n;
  dp(n);
  cout << arr[n]<<endl;


}