#include <iostream>

using namespace std;

void solve() {

  int n;
  cin >> n;

  if (n == 2) {
    cout << 1 << ' ' << 0 << '\n';
    return;
  }

  int current = n - 1;
  while (current > 1) {
    cout << current << ' ';
    if (__lg(current) != __lg(current - 1))
      break;
    current--;
  }
  for (int i = 0; i < current; i++) {
    cout << i << ' ';
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
