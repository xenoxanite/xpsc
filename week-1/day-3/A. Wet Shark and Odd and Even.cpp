/**
 * author: Samiul Basir Fahim,
 * title: A. Wet Shark and Odd and Even.cpp,
 **/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> a(n);

  long long s = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i], s += a[i];
  }

  sort(a.begin(), a.end());

  if (s % 2 != 0) {
    for (int i : a) {
      if (i % 2 != 0) {
        s -= i;
        break;
      }
    }
  }

  cout << s;

  return 0;
}
