#include <iostream>
using namespace std;
int main() {
  int n,m;
  cin >> n >> m;
  int arr[n][n];
  for(int i = 0 ; i<n ;i++){
    for (int j = 0 ; j < n ;j++){
      int temp;
      cin >> temp;
      arr[i][j] = temp;
    }
  }
  for(int i = 0 ; i<n ;i++){
    int zeros = 0;
    int ones = 0;
    for(int j = 0; j<n ; j++){
      if(arr[i][j] == 0){
        zeros++;
      }else if(arr[i][j] == 1){
        ones++;
      }
    }
    if(m == 0 && zeros > ones){
      for(int j = 0; j<n ; j++){
        arr[i][j] = 0;
      }
    }else if(m == 1 && ones > zeros){
      for(int j = 0; j < n ; j++){
        arr[i][j] = 1;
      }
    }
  }
  for(int i = 0 ; i<n ;i++){
    int zeros = 0;
    int ones = 0;
    for(int j = 0; j<n ; j++){
      if(arr[j][i] == 0){
        zeros++;
      }else if(arr[j][i] == 1){
        ones++;
      }
    }
    if(m == 0 && zeros > ones){
      for(int j = 0; j<n ; j++){
        arr[j][i] = 0;
      }
    }else if(m == 1 && ones > zeros){
      for(int j = 0; j < n ; j++){
        arr[j][i] = 1;
      }
    }
  }
  for(int i = 0 ; i<n ;i++){
    int zeros = 0;
    int ones = 0;
    for(int j = 0; j<n ; j++){
      if(arr[i][j] == 0){
        zeros++;
      }else if(arr[i][j] == 1){
        ones++;
      }
    }
    if(m == 0 && zeros > ones){
      for(int j = 0; j<n ; j++){
        arr[i][j] = 0;
      }
    }else if(m == 1 && ones > zeros){
      for(int j = 0; j < n ; j++){
        arr[i][j] = 1;
      }
    }
  }

    for(int i = 0 ; i<n ;i++){
    int zeros = 0;
    int ones = 0;
    for(int j = 0; j<n ; j++){
      if(arr[j][i] == 0){
        zeros++;
      }else if(arr[j][i] == 1){
        ones++;
      }
    }
    if(m == 0 && zeros > ones){
      for(int j = 0; j<n ; j++){
        arr[j][i] = 0;
      }
    }else if(m == 1 && ones > zeros){
      for(int j = 0; j < n ; j++){
        arr[j][i] = 1;
      }
    }
  }
 
  for(int i = 0 ; i<n ;i++){
    for (int j = 0 ; j < n ;j++){
      if (arr[i][j]!=m ) {
        cout << 0 ;
        return 0;
      }
    }
  }
  cout << 1 ;
  return 0 ;
}