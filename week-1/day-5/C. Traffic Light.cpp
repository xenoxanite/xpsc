/**
 * author: Samiul Basir Fahim,
 * title: C. Traffic Light.cpp,
 **/
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int testcases;
  cin >> testcases;
  while (testcases--) {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    s += s;
    int mx = -1, ans = -1;
    for (int i = s.size() - 1; i >= 0; i--) {
      if (s[i] == 'g')
        mx = i;
      if (s[i] == c && mx >= 0)
        ans = max(ans, mx - i);
    }
    cout << ans << '\n';
  }
  return 0;
}
