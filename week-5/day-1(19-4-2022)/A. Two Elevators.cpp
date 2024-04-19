#include <iostream>
#define inpvec(x)                                                              \
  for (auto &i : x)                                                            \
  cin >> i
#define all(x) x.begin(), x.end()

using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  a -= 1;
  int d = abs(b - c) + c - 1;
  if (a == d)
    cout << 3;
  else if (a > d)
    cout << 2;
  else
    cout << 1;
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
