#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, l = 0, r = 0;
  long long s, sum = 0, ans = 0;
  cin >> n >> s;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  while (r < n) {
    sum += a[r];
    if (sum <= s)
      ans += r - l + 1;
    else {
      while (sum > s && l < n)
        sum -= a[l], l++;
      if (sum <= s)
        ans += r - l + 1;
    }
    r++;
  }
  cout << ans;
  return 0;
}
