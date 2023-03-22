//https://cses.fi/problemset/task/1083
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
  int n;
  cin>> n;
  vector <int> arr;
  for(int i = 0; i < (n - 1); i++) {
    int temp;
    cin>>temp;
    arr.push_back(temp);
  }
  sort(arr.begin(), arr.end());
  for(int i = 0; i < n-1; i++){
    if(n == 2 && arr[0] == 2){
      cout<< 1;
      break;
    }
    if(arr[i] + 1 != arr[i+1]){
      cout<<arr[i]+1 << endl;
      break;
    }
  }
  return 0;
}