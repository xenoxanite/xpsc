#include <iostream>
#include <queue>
#define fr(x, y, z) for (ll x = y; x < z; x++)
#define ll long long
#define rf(x) for (auto i : x)
#define rfr(x) for (auto &i : x)
#define prarr(x)                                                               \
  for (auto &&i : x)                                                           \
    cout << i << ' ';                                                          \
  cout << '\n';
using namespace std;

void solve() {
  priority_queue<int> bonus;
  ll answer = 0, n;
  cin >> n;
  fr(i, 0, n) {
    int a;
    cin >> a;
    if (a == 0) {
      if (!bonus.empty()) {
        answer += bonus.top();
        bonus.pop();
      }
    } else {
      bonus.push(a);
    }
  }
  cout << answer << '\n';
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
