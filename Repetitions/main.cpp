//https://cses.fi/problemset/task/1069
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  string DNA;
  getline(cin, DNA);
  vector <int> arr;
  int count = 1;
  for(int i = 0; i < DNA.length(); i++){
    if(DNA[i] == DNA[i + 1]){
      count++;
    }
    else{
      arr.push_back(count);
      count = 1;
    }
  }
  sort(arr.begin(), arr.end());
  cout<< arr[arr.size()- 1];

  return 0;
}