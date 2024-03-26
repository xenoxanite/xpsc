#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    string a, b;
    for (int i = 0; i < n; i++) {
      char c;
      cin >> c;
      if (c == 'B')
        a.push_back('G');
      else
        a.push_back(c);
    }
    for (int i = 0; i < n; i++) {
      char c;
      cin >> c;
      if (c == 'B')
        b.push_back('G');
      else
        b.push_back(c);
    }
    cout << ((a == b) ? "YES\n" : "NO\n");
  }
  return 0;
}
