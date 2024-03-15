/**
 * author: Samiul Basir Fahim,
 * title: B - Not Found.cpp,
 **/
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  vector<bool> freq(('z' - 'a' + 1), false);

  for (char c : s) {
    freq[c - 'a'] = true;
  }

  for (int i = 0; i < 26; i++) {
    if (!freq[i]) {
      cout << char('a' + i);
      return 0;
    }
  }
  cout << "None";

  return 0;
}
