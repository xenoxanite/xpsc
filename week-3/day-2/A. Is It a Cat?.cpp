#include <iostream>
#include <stack>
#include <string>
#define ll long long
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    stack<char> s;
    for (int i = 0; i < n; i++) {
      char c;
      cin >> c;
      if (c <= 'Z') {
        c += 32;
      }
      if (!s.empty()) {
        if (s.top() != c)
          s.push(c);
      } else
        s.push(c);
    }
    string ss;
    while (!s.empty()) {
      ss.push_back(s.top());
      s.pop();
    }
    cout << (ss == "woem" ? "YES\n" : "NO\n");
  }
  return 0;
}
