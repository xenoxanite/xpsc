#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, ans = INT_MAX;
  ll s, sum = 0;
  cin >> n >> s;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 0, r = 0;
  while (r < n) {
    sum += a[r];
    if (sum >= s) {
      while (l < n) {
        if (sum < s)
          break;
        else {
          ans = min(ans, r - l + 1);
        }
        sum -= a[l++];
      }
    }
    r++;
  }
  cout << (ans != INT_MAX ? ans : -1);
  return 0;
}
