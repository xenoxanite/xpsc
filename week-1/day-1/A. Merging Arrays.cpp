/**
 * author: Samiul Basir Fahim,
 * title: A. Merging Arrays.cpp,
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

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];

  int l = 0, r = 0;
  while (l < n || r < m) {
    if (r >= m || l < n && a[l] <= b[r]) {
      cout << a[l] << ' ';
      l++;
    } else if (l >= n || r < m && b[r] < a[l]) {
      cout << b[r] << ' ';
      r++;
    }
  }

  return 0;
}
