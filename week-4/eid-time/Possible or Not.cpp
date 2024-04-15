#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);

  int testcase;
  cin >> testcase;
  while (testcase--) {
    int n, x;
    cin >> n >> x;
    int an = -1;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if ((a & x) == x)
        an &= a;
    }
    cout << (an == x ? "YES" : "NO") << '\n';
  }
}
