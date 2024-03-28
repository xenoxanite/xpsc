#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  int tcase;
  cin >> tcase;
  while (tcase--) {
    int n, k;
    vector<int> a(26, 0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
      char c;
      cin >> c, a[c - 'a']++;
    }
    int odd = 0;
    for (int i : a)
      odd += (i % 2) == 1;

    cout << ((n - k == 1 || k >= odd - 1) ? "YES\n" : "NO\n");
  }
  return 0;
}
