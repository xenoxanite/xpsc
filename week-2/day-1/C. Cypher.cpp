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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> cnt(n, 0);
    for (int i = 0; i < n; i++) {
      int m;
      cin >> m;
      for (int j = 0; j < m; j++) {
        char c;
        cin >> c;
        if (c == 'D') {
          if (a[i] == 9) {
            a[i] = 0;
          } else {
            a[i]++;
          }
        } else {
          if (a[i] == 0) {
            a[i] = 9;
          } else {
            a[i]--;
          }
        }
      }
    }
    for (int i : a) {
      cout << i << ' ';
    }
    cout << '\n';
  }
  return 0;
}
