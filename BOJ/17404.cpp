#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000005
using namespace std;
int n;
int arr[1001][1001];
int dp[3][1001];
int main() {
  cin >> n; 
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < 3 ; j++){
      cin >> arr[j][i];
    }
  }
  int ans = MAX;
  for(int i = 0 ; i < 3 ; i++){
    dp[0][0] = MAX;
		dp[1][0] = MAX;
		dp[2][0] = MAX;
    dp[i][0] = arr[i][0];

    for(int j = 1 ; j < n ; j++){
      dp[0][j] = min(dp[1][j-1],dp[2][j-1]) + arr[0][j];
      dp[1][j] = min(dp[0][j-1],dp[2][j-1]) + arr[1][j];
      dp[2][j] = min(dp[1][j-1],dp[0][j-1]) + arr[2][j];
    }
    for (int k = 0; k < 3; k++) {
			if (i == k)continue;
			ans = min(ans, dp[k][n-1]);
		}
  }

  cout << ans;

}