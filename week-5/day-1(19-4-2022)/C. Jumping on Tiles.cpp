#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#define inpvec(x)                                                              \
  for (auto &i : x)                                                            \
  cin >> i
#define all(x) x.begin(), x.end()

using namespace std;

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  char mx = max(s[0], s[n - 1]), mn = min(s[0], s[n - 1]);
  vector<pair<char, int>> tiles;
  for (int i = 0; i < n; i++)
    if (s[i] <= mx && s[i] >= mn)
      tiles.push_back({s[i], i});

  if (tiles.size() > 2)
    sort(tiles.begin() + 1, tiles.end() - 1,
         [&](pair<char, int> a, pair<char, int> b) {
           if (s[0] < s[n - 1])
             return a.first < b.first;
           return a.first > b.first;
         });

  cout << mx - mn << ' ' << tiles.size() << '\n';
  for (auto x : tiles) {
    cout << x.second + 1 << ' ';
  }
  cout << '\n';
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cout.tie(nullptr), cin.tie(nullptr);
  int testcases;
  cin >> testcases;
  while (testcases--)
    solve();
  return 0;
}
