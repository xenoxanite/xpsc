#include <iostream>
#include <string>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int df = 0, pr = 0;
  for (int i = 0; i < n / 2; i++)
    pr += s[i] == s[n - 1 - i], df += s[i] != s[n - 1 - i];

  string answer;
  for (int i = 0; i <= n; i++) {
    int total = i - df;
    if (total < 0 || total % 2 != 0 && n % 2 == 0 || total / 2 > pr)
      answer.push_back('0');
    else
      answer.push_back('1');
  }
  cout << answer << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();
}
