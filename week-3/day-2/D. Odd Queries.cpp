#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (i == 0)
        a[i] = x;
      else {
        a[i] = a[i - 1] + x;
      }
    }
    while (q--) {
      int l, r, k;
      cin >> l >> r >> k;
      int x;
      if (l > 1)
        x = a[r - 1] - a[l - 2];
      else
        x = a[r - 1];
      ll sum = a[n - 1] - x;
      sum += (r - l + 1) * k;
      cout << (sum % 2 != 0 ? "YES\n" : "NO\n");
    }
  }

  return 0;
}
