#include <iostream>
#include <set>
#include <string>
#include <vector>
#define ll long long
using namespace std;

void solve() {
  int n;
  cin >> n;
  string ans(n, '0');
  vector<string> sv(n);
  set<string> ss;
  for (string &s : sv)
    cin >> s, ss.insert(s);

  for (int i = 0; i < n; i++) {
    char f = '0';
    for (int j = 1; j < sv[i].size(); j++) {
      if (ss.count(sv[i].substr(0, j)) > 0 &&
          ss.count(sv[i].substr(j, sv[i].size())) > 0) {
        f = '1';
      }
    }
    ans[i] = f;
  }
  cout << ans << '\n';
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
