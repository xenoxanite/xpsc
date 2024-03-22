#include <algorithm>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  string s = "Timur";
  sort(s.begin(), s.end());
  while (n--) {
    int m;
    cin >> m;
    string ss;
    cin >> ss;
    sort(ss.begin(), ss.end());
    cout << ((ss == s) ? "YES\n" : "NO\n");
  }
  return 0;
}
