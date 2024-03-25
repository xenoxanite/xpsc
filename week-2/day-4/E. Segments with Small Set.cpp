#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long int answer = 0;
  int l = 0, r = 0;
  map<int, int> f;
  while (r < n) {
    f[a[r]]++;
    if (f.size() <= k) {
      answer += r - l + 1;
    } else {
      while (l < n) {
        if (f.size() <= k)
          break;
        if (f[a[l]] > 1) {
          f[a[l]]--;
        } else {
          f.erase(a[l]);
        }
        l++;
      }

      if (f.size() <= k) {
        answer += r - l + 1;
      }
    }
    r++;
  }
  cout << answer;
  return 0;
}
