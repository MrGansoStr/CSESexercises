#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int n;
  cin>> n ;
  for(unsigned long long i = 1; i <= n; i++){
    cout<< (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << endl;
  }
  return 0;
}