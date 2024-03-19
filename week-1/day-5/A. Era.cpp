/**
 * author: Samiul Basir Fahim,
 * title: A. Era.cpp,
 **/
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int testcases;
  cin >> testcases;
  while (testcases--) {
    int n;
    cin >> n;
    int ans = 0;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      if (a[i] > i) {
        ans = max(ans, a[i] - i);
      }
    }
    cout << ans << '\n';
  }

  return 0;
}
