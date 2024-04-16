#include <iostream>
using namespace std;

void solve() {
  int x;
  cin >> x;
  int cnt = 0, i = 31;
  while (i >= 0) {
    if (x & (1 << i)) {
      cnt++;
      if (cnt == 2)
        break;
    }
    i--;
  }
  int answer = 0;
  while (i >= 0) {
    answer += (x & (1 << i)) == 0;
    i--;
  }
  cout << (1 << answer) << '\n';
}

int main(int argc, char *argv[]) {

  ios::sync_with_stdio(false);
  cout.tie(nullptr), cin.tie(nullptr);

  int testcase;
  cin >> testcase;
  while (testcase--)
    solve();
  return 0;
}
