#include <climits>
#include <iostream>
#define ll long long
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  int grid[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> grid[i][j];
    }
  }

  ll mxsum = INT_MIN;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      ll sum = grid[i][j];
      int a = i + 1, b = j + 1;
      while (a < n && b < m)
        sum += grid[a][b], a++, b++;
      a = i - 1, b = j + 1;
      while (a >= 0 && b < m)
        sum += grid[a][b], a--, b++;
      a = i - 1, b = j - 1;
      while (a >= 0 && b >= 0)
        sum += grid[a][b], a--, b--;
      a = i + 1, b = j - 1;
      while (a < n && b >= 0)
        sum += grid[a][b], a++, b--;
      mxsum = max(mxsum, sum);
    }
  }
  cout << mxsum << '\n';
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
