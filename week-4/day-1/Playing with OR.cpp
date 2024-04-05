#include <iostream>
#include <vector>
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
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rfr(i, a) cin >> i;
  int cnt = 0;
  fr(i, 0, n - k + 1) fr(j, i, i + k) {
    if (a[j] % 2 != 0) {
      cnt++;
      break;
    }
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
