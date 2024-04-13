#include <iostream>
using namespace std;

void solve() {
  int x;
  cin >> x;
  int lsb = __lg(x);
  long long answer = 1;
  int z = (1 << lsb), y = (x ^ z);
  for (int i = lsb - 1; i >= 0; i--) {
    if (((z >> i) & 1) == ((y >> i) & 1))
      answer++;
  }
  cout << answer << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();
}
