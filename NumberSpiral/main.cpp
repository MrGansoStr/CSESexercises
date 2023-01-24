#include <bits/stdc++.h>
#include <math.h>
using namespace std;


int main(){
  //cin.tie(0);
  //cout.tie(0);
  //ios_base::sync_with_stdio(0);
  long int n; cin>> n;
  long long int arrLineCenter[n];
  long long int num = 1, pivot = 2;
  long long int arrPointsToShow[n];
  arrLineCenter[0] = 1;
  for(unsigned long long int i = 1; i < n*n + 1; i++){
    arrLineCenter[i] = num + pivot;
    num = num + pivot;
    pivot = pivot + 2;
  }
  cout<< "finished" << endl;
  unsigned long long int a, b;
  for(unsigned long long int i = 0; i < 2; i++){
     cin>> a >> b;
    if(a > b){
      arrPointsToShow[i] = arrLineCenter[a-1] + (a - b);;
    }
    if(a == b){
      arrPointsToShow[i] = arrLineCenter[a-1];
    }
    else if(b > a){
      arrPointsToShow[i] = arrLineCenter[b - 1] + ( b - a);
    }
  }
  for(unsigned long long int i = 0; i < n ;i++){
    cout<< arrPointsToShow[i] << endl;
  }

  return 0;
}