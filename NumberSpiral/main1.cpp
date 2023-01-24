#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  long int n=1;
	cin>>n;
	long int list[n];
  for(unsigned long int i = 0; i < n; i++){
    unsigned long long a, b; cin>> a >> b;
    if(a>=b){
      if((a&1) == 0){
        list[i] = (a * a) - b + 1;
      } 
      else {
        list[i] = (a - 1)* (a - 1) + b;
      }
    }
    else {
      if((b&1) == 1) {
        list[i] = (b * b) - a + 1;
      }
      else {
        list[i] = (b - 1) * (b - 1) + a; 
      }
    }
  }
  for(long long int i = 0; i < n; i++){
    cout<< list[i] << endl;
  }
  return 0;
}