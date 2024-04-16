#include <iostream>
using namespace std;

void solve() {
  int n;
  cin >> n;
  cout << n << ' ' << (n - 1) << '\n';
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
