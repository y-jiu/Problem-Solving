#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int a[] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
  
  string name1;
  string name2;
  
  cin >> name1;
  cin >> name2;
  vector<int> arr;
  
  for( int i = 0 ; i< name1.length() ; i++){
    arr.push_back(a[name1[i] - 'A']);
    arr.push_back(a[name2[i] - 'A']);
  }
  while (arr.size() != 2){
    vector<int> v;
    for (int i = 0; i < arr.size() - 1; i++)
      v.push_back((arr[i] + arr[i + 1]) % 10);
    arr = v;
  }
cout << arr[0] <<arr[1];
}   