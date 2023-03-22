#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int n; cin>> n;
  for(int i = 1; i <= n; i++){
    if(n > 1 && n < 4){
      cout<<"NO SOLUTION";
      break;
    }
    if(i % 2 == 0){
      cout << i << " ";
    }
    if(i == n){
      for(int j = 1; j <= n; j++){
        if(j % 2 != 0){
          cout<< j << " ";
        }
      }
    }
  }

  return 0;
}