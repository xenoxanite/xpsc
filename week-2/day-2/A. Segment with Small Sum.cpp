#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  long long int k, sum = 0;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 0, r = 0, ans = 0;
  while (r < n) {
    sum += a[r];
    if (sum <= k) {
      ans = max(ans, r - l + 1);
    } else {
      sum -= a[l];
      l++;
    }
    r++;
  }
  cout << ans;
  return 0;
}
