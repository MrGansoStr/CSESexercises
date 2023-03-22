#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n)
{
	ll temp = (n * (n + 1) / 2);
	if (temp % 2 == 1)
	{
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	cout << temp << endl;
	ll target = temp / 2;
	ll sum = 0;
	ll i = n;
	unordered_set<ll> s;
	s.reserve(n);
	while (sum < target)
	{
		s.insert(i);
		sum += i;
		/* cout << "Inserting " << i << " sum = " << sum << endl; */
		i--;
	}
	if (sum > target)
	{
		sum -= (i + 1);
		assert(sum < target);
		s.erase(s.find(i + 1));
		/* cout << "Removing " << i + 1 << " sum = " << sum << endl; */
		s.insert(target - sum);
		/* cout << "Inserting " << target - sum  << " sum = " << sum << endl; */
	}
	cout << s.size() << "\n";
	auto tempSum = 0;
	for (auto element : s)
	{
		tempSum += element;
		cout << element << " ";
	}
	cout << "La suma es: " << tempSum;
	cout << "\n";
	cout << n - s.size() << "\n";
	for (int j = 1; j <= n; j++)
	{
		if (s.find(j) == s.end())
		{
			cout << j << " ";
		}
	}
	cout << "\n";
}

int main()
{
	solve(11);
}