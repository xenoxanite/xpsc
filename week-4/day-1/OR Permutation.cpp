#include <iostream>
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
  int n;
  cin >> n;
  while (n--) {
    cout << n + 1 << ' ';
  }
  cout << '\n';
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
