#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    stack<char> s;
    for (int i = 0; i < n; i++) {
      char c;
      cin >> c;
      if (!s.empty() && s.top() == '(' && c == ')')
        s.pop();
      else
        s.push(c);
    }
    cout << s.size() / 2 << '\n';
  }
  return 0;
}
