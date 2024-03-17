/**
 * author: Samiul Basir Fahim,
 * title: A. Forgotten Episode.cpp,
 **/
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<bool> freq(n + 1, false);
  for (int i = 0; i < n - 1; i++) {
    int a;
    cin >> a;
    freq[a] = true;
  }

  for (int i = 1; i <= n; i++) {
    if (freq[i] == false) {
      cout << i << '\n';
      return 0;
    }
  }
  return 0;
}
