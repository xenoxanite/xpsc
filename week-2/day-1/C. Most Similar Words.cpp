#include <climits>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int testcases;
  cin >> testcases;
  while (testcases--) {
    int n, m;
    cin >> n >> m;

    int ans = INT_MAX;
    vector<string> ss(n);
    for (int i = 0; i < n; i++) {
      cin >> ss[i];
    }
    for (int i = 0; i < ss.size(); i++) {
      for (int j = i; j < ss.size(); j++) {
        if (i == j)
          continue;
        int cnt = 0;
        for (int x = 0; x < ss[i].size(); x++) {
          cnt += abs(ss[i][x] - ss[j][x]);
        }
        ans = min(ans, cnt);
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
