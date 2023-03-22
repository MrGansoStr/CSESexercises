#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  ll count = 0, num; cin >> num;
  for (ll i = 5; num / i >= 1; i *= 5)
  {
    int temp = num / i;
    count += temp;
  }
  cout << count;
  return 0;
}