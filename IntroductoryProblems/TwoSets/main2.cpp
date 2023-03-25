#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  ll n; cin >> n;
  ll temp = (n * (n + 1) / 2);
  if (temp % 2 != 0)
  {
    cout << "NO" << endl;
    return 0;
  }
  else
  {
    cout << "YES";
  }
  const ll target = temp / 2;
  vector<ll> listSecondGroup;
  vector<ll> listFirstGroup(n);
  iota(listFirstGroup.begin(), listFirstGroup.end(), 1);
  ll sum = 0;
  for (ll i = n-1; i >= 0; i--)
  {
    if ((sum + listFirstGroup[i]) <= target)
    {
      listSecondGroup.push_back(listFirstGroup[i]);
      listFirstGroup.erase(listFirstGroup.begin() + i);
      sum += listFirstGroup[i];
    }
    if(sum == target) {
      break;
    }
  }
  cout << "\n" << listSecondGroup.size() << "\n";
  for (ll i = 0; i < listSecondGroup.size(); i++)
  {
    cout << listSecondGroup[i] << " ";
  }
  cout << "\n" << listFirstGroup.size() << "\n";
  for (ll i = 0; i < listFirstGroup.size(); i++)
  {
    cout << listFirstGroup[i] << " ";
  }
  return 0;
}
