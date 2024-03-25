#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  ll s, sum = 0, ans = 0;
  cin >> n >> s;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int l = 0, r = 0;
  while (r < n) {
    sum += a[r];
    while (sum >= s)
      sum -= a[l++];
    ans += l, r++;
  }
  cout << ans;
  return 0;
}
