#include <iostream>
using namespace std;

void solve() {
  int x;
  cin >> x;
  int lsb = __lg(x);
  int z = (1 << lsb), y = (x ^ z);
  cout << y << ' ' << z << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();
}
