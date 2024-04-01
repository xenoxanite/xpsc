#include <iostream>
#include <queue>
#include <string>
#define ll long long
#define rf(x) for (auto i : x)
#define rfr(x) for (auto &i : x)
#define prarr(x)                                                               \
  for (auto &&i : x)                                                           \
    cout << i << ' ';                                                          \
  cout << '\n';
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  ll sum = 0;
  priority_queue<ll> anss;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'L')
      anss.push((n - 1 - i) - i), sum += i;
    else
      anss.push(i - (n - 1 - i)), sum += n - 1 - i;
  }
  while (!anss.empty()) {
    auto top = anss.top();
    anss.pop();
    if (top > 0)
      sum += top;
    cout << sum << ' ';
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
