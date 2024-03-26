#include <iostream>
#include <unordered_set>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a, s.insert(a);
    }
    if ((n - s.size()) % 2 != 0) {
      cout << s.size() - 1 << '\n';
    } else {
      cout << s.size() << '\n';
    }
  }
  return 0;
}
