#include <iostream>
#include <map>
#define ll long long
#define fr(x, y, z) for (ll x = y; x < z; x++)
#define rf(x, y) for (auto x : y)
#define rfr(x, y) for (auto &x : y)
#define prarr(x)                                                               \
  for (auto &&i : x)                                                           \
    cout << i << ' ';                                                          \
  cout << '\n';
using namespace std;

void solve() {
  ll n, cnt = 0;
  cin >> n;
  map<ll, ll> mp;
  fr(i, 0, n) {
    int a;
    cin >> a, mp[__lg(a)]++;
  }
  rf(i, mp) { cnt += (1LL * i.second * (i.second - 1)) / 2; }
  cout << cnt << '\n';
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
