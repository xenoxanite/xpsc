/**
 * author: Samiul Basir Fahim,
 * title: A - Find Multiple.cpp,
 **/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, c;
  cin >> a >> b >> c;

  int m = c, i = 1;

  while (true) {
    m = c * i, i++;
    if (m >= a && m <= b) {
      cout << m;
      break;
    }
    if (m > b) {
      cout << -1;
      break;
    }
  }

  return 0;
}
