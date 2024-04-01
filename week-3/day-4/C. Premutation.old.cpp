#include <iostream>
#include <queue>
#include <set>
#include <utility>
#include <vector>
#define ll long long
#define rf(x) for (auto i : x)
#define rfr(x) for (auto &i : x)
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<set<int>> adj(n + 5);
  set<int> s;
  for (int i = 0; i < n; i++) {
    vector<int> inps(n - 1);
    for (int j = 0; j < n - 1; j++) {
      cin >> inps[j];
      if (j > 0) {
        int a = inps[j], b = inps[j - 1];
        adj[a].insert(b);
        s.insert(b);
      }
    }
  }
  int source = -1;
  for (int i = 1; i <= n; i++) {
    if (!(s.count(i) > 0)) {
      source = i;
    }
  }
  vector<int> ans;
  queue<pair<int, int>> q;
  vector<int> p(n + 5, -1);
  q.push({source, 1});
  p[source] = -1;
  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();
    rf(adj[x]) {
      q.push({i, y + 1});
      p[i] = x;
      if (adj[i].empty() && y + 1 == n) {
        while (i != -1) {
          cout << i << ' ';
          i = p[i];
        }
      }
    }
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
