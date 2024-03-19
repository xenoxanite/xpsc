/**
 * author: Samiul Basir Fahim,
 * title: C. Number of Equal.cpp,
 **/
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int l = 0, r = 0;
  long long answer = 0;
  while (l < n && r < m) {
    int cnt1 = 0, cnt2 = 0, curr = a[l];
    while (a[l] == curr && l < n) {
      cnt1++, l++;
    }
    while (b[r] < curr && r < m) {
      r++;
    }
    while (b[r] == curr && r < m) {
      cnt2++, r++;
    }
    answer += (1ll * cnt1 * cnt2);
  }

  cout << answer << '\n';
  return 0;
}
