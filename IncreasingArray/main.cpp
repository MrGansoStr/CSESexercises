//https://cses.fi/problemset/task/1094
#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int n; cin>>n;
  long long int steps = 0;
  long long int temp, newtemp;
  cin>> temp;
  for(int i = 0; i < n-1; i++){
    cin>> newtemp;
    if(temp > newtemp){
      steps += (temp - newtemp);
    }
    else{
      temp = newtemp;
    }
  }
  cout<< steps << endl;
  return 0;
}