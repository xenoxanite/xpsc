#include <iostream>
#include <set>
#define ll long long
#define rf(x) for (auto i : x)
#define rfr(x) for (auto &i : x)
#define fr(x, y, z) for (ll x = y; x < z; x++)
#define prarr(x)                                                               \
  for (auto &&i : x)                                                           \
    cout << i << ' ';                                                          \
  cout << '\n';
using namespace std;

void solve() {
  int n;
  cin >> n;
  multiset<int> s;
  fr(i, 0, n) {
    int a;
    cin >> a, s.insert(a);
  }
  ll cnt = 0;
  while (!s.empty()) {
    int fr = *s.begin();
    while (s.count(fr) > 0) {
      auto it = s.find(fr);
      s.erase(it);
      fr++;
    }
    cnt++;
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
