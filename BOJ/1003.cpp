#include <iostream>

int t;
int arr[2][41];
using namespace std;
void dp(int n){
  arr[0][0] = 1;
  arr[0][1] = 0;
  arr[1][0] = 0;
  arr[1][1] = 1;
  for (int i = 2 ; i <=n ; i++){
    arr[0][i] = arr[0][i-1] + arr[0][i-2];
    arr[1][i] = arr[1][i-1] + arr[1][i-2];
  }
}
void makedp0(){
  for(int i = 0 ; i < 41 ; i++){
    arr[0][i] = 0;
    arr[1][i] = 0;
  }
}

int main() {

  cin >> t;
  int tc[t];
  for(int i = 0 ; i < t;i++){
    int tcn;
    cin >> tcn;
    tc[i] = tcn;
  }
  
  for(int i = 0 ; i< t ;i++){
    
    dp(tc[i]);
    cout << arr[0][tc[i]]<< " "<<arr[1][tc[i]]<<endl;
    makedp0();
  }

}