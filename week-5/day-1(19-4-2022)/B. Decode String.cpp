#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define inpvec(x)                                                              \
  for (auto &i : x)                                                            \
  cin >> i
#define all(x) x.begin(), x.end()

using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int c = n - 1;
  vector<int> chars;
  while (c >= 0) {
    if (s[c] != '0') {
      chars.push_back(s[c] - '0');
      c--;
    } else {
      string tmp;
      tmp.push_back(s[c - 2]), tmp.push_back(s[c - 1]);
      chars.push_back(stoi(tmp));
      c -= 3;
    }
  }
  reverse(chars.begin(), chars.end());
  for (int i : chars) {
    cout << char(i + 'a' - 1);
  }
  cout << '\n';
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cout.tie(nullptr), cin.tie(nullptr);
  int testcases;
  cin >> testcases;
  while (testcases--)
    solve();
  return 0;
}
