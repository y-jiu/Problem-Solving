#include <iostream>

int n;
int arr[1010];
using namespace std;

int main() {

  cin >> n;
  int nums[n];

  for ( int i = 0 ; i < n ; i++){
    cin >> nums[i];
  }
  
  int ans = 0;
  for (int i = 0 ; i < n ; i++){
    arr[i] = 1;
    for(int j = 0 ; j < i;j++){
      if(nums[i] > nums[j]){
        arr[i] = max(arr[j] + 1,arr[i]);
        
      }
      ans = max(ans, arr[i]);
    }
    
  }
  cout << ans <<endl; 
  
}