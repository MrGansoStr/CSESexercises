#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  long int n; cin>> n;
  long long a, b;
  long* newlist = new long[n];
  for(unsigned long int i = 0; i < n; i++){
    cin>> a >> b;
    if(a > b){
      if(a % 2 == 0){
      newlist[i] =((a * (a - 1)) + 1) + (a - b); 
      //cout<< ((a * (a - 1)) + 1) + (a - b)<< endl;
      }
      else{
        newlist[i] = ((a * (a - 1)) + 1) - (a - b);
        //cout<< ((a * (a - 1)) + 1) - (a - b) << endl;
      }
    }
    else {
      if(b%2 == 0){
        newlist[i] = (((a + (b-a))*(b-1)) + 1) - (b - a); 
        //cout<<(((a + (b-a))*(b-1)) + 1) - (b - a) << endl;
      }
      else{
        newlist[i] = (((a + ((b - a)-1)) * b) + 1) + (b - a);
        //cout<<(((a + ((b - a)-1)) * b) + 1) + (b - a) << endl;
      }
    }
  }
  for(long long i = 0; i < n; i++){
    cout<< newlist[i] << endl;
  }
  delete[] newlist;
  return 0;
}