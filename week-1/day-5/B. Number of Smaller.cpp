/**
 * author: Samiul Basir Fahim,
 * title: B. Number of Smaller.cpp,
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
  while (r < m) {
    while (a[l] < b[r] && l < n) {
      l++;
    }
    cout << l << ' ';
    r++;
  }
  return 0;
}
