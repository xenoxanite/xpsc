#include <iostream>
#include <vector>
#define ll long long
#define fr(x, y, z) for (ll x = y; x < z; x++)
#define rf(x, y) for (auto x : y)
#define rfr(x, y) for (auto &x : y)
#define prarr(x)                                                               \
  for (auto &&i : x)                                                           \
    cout << i << ' ';                                                          \
  cout << '\n';
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> arm(m + 1);
  rfr(i, arm) cin >> i;
  int answer = 0;

  fr(i, 0, m) {
    int fedor = arm[m];
    int cnt = 0;
    fr(j, 0, n) cnt += ((fedor >> j) & 1) != ((arm[i] >> j) & 1);
    answer += cnt <= k;
  }
  cout << answer;
  return 0;
}
