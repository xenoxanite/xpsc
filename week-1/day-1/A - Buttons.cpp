/**
 * author: Samiul Basir Fahim,
 * title: A - Buttons.cpp,
 **/
#include <algorithm>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int a, b;
  cin >> a >> b;

  int answer = 0;

  for (int i = 0; i < 2; i++) {
    answer += max(a, b);
    if (a <= b) {
      b--;
    } else {
      a--;
    }
  }

  cout << answer << '\n';

  return 0;
}
