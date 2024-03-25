#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  long long int k, cnt = 0;
  cin >> n >> k;
  vector<long long int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 0, r = 0;
  multiset<long long int> s;
  while (r < n) {
    s.insert(a[r]);
    long long int mx = *s.rbegin(), mn = *s.begin();
    if ((mx - mn) <= k) {
      cnt += r - l + 1;
    } else {
      while (l < n) {
        long long int mx = *s.rbegin(), mn = *s.begin();
        if ((mx - mn) <= k)
          break;
        s.erase(s.find(a[l]));
        l++;
      }
      mn = *s.begin(), mx = *s.rbegin();
      if ((mx - mn) <= k) {
        cnt += r - l + 1;
      }
    }
    r++;
  }
  cout << cnt << '\n';
  return 0;
}
