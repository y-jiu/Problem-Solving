#include <iostream>
#include <vector>
#include <algorithm>
#define MIN -1000005
using namespace std;

int n;
int m;
int arr[202][202];
int sum[202][202];
int main() {

  int ans = MIN;
  cin >> n;
  cin >> m; 
  for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= m ; j++){
      cin >> arr[i][j];
      sum[i][j] = arr[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
    }
  }

 for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= m ; j++){
      for (int k = 0 ; k < i ; k++){
        for(int l = 0 ; l < j ; l++){
          // cout << sum[i][j] - sum[k][j] - sum[i][l] + sum[k][l] << " ";
          ans = max(ans,sum[i][j] - sum[k][j] - sum[i][l] + sum[k][l]);
        }
      }
    }
  }

  cout << ans;

}