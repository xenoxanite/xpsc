#include <iostream>
#include <vector>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int x = 0, y = 0;
  for (int &i : a)
    cin >> i, x ^= i;
  for (int &i : a)
    i ^= x;
  for (int i : a)
    y ^= i;
  cout << (y == 0 ? x : -1) << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();
}
