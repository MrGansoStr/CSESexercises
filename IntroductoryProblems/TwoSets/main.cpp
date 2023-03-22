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
  vector<ll> listFirstGroup;
  vector<ll> listSecondGroup;
  ll sum = 0;
  for (ll i = n; i >= 1; i--)
  {
    if ((sum + i) <= target)
    {
      listFirstGroup.push_back(i);
      sum += i;
    }
    else
    {
      listSecondGroup.push_back(i);
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
