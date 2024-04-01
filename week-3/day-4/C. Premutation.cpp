#include <iostream>
#include <map>
#include <vector>
#define ll long long
#define rf(x) for (auto i : x)
#define rfr(x) for (auto &i : x)
#define prarr(x)                                                               \
  for (auto &&i : x)                                                           \
    cout << i << ' ';                                                          \
  cout << '\n';
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> numbers(n);
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n; j++) {
      int a;
      cin >> a;
      numbers[i].push_back(a);
    }
  }

  map<int, int> mp;
  rf(numbers) mp[i[0]]++;

  pair<int, int> maxElement;

  rf(mp) if (i.second > maxElement.second) maxElement = i;

  cout << maxElement.first << ' ';

  rf(numbers) {
    if (i[0] != maxElement.first) {
      prarr(i);
    }
  }
}
int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
