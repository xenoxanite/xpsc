#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tcase;
  cin >> tcase;
  while (tcase--) {
    int n;
    cin >> n;
    map<int, int> counter;
    int c, mf = 0, ans = 0;
    for (int i = 0; i < n; i++)
      cin >> c, counter[c]++, mf = max(mf, counter[c]);
    n -= mf;
    while (0 < n) {
      mf = min(mf, n), ans += mf + 1;
      n -= mf, mf *= 2;
    }
    cout << ans << '\n';
  }
  return 0;
}
