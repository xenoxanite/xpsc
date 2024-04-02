#include <iostream>
#include <vector>
#define ll long long
#define fr(x, y, z) for (ll x = y; x < z; x++)
#define rf(x) for (auto i : x)
#define rfr(x) for (auto &i : x)
#define prarr(x)                                                               \
  for (auto &&i : x)                                                           \
    cout << i << ' ';                                                          \
  cout << '\n';
using namespace std;

void solve() {
  int n, m, t;
  cin >> n >> m >> t;
  vector<int> temps(n);
  rfr(temps) cin >> i;
  int l = 0, r = 0;
  ll cnt = 0;
  while (r < n) {
    int length = r - l + 1;
    if (temps[r] <= t) {
      if (length >= m) {
        cnt += length - m + 1;
      }
    } else {
      l = r + 1;
    }
    r++;
  }
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
