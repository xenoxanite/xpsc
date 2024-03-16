/**
 * author: Samiul Basir Fahim,
 * title: C - Multiple Gift.cpp,
 **/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  long long x, y;
  cin >> x >> y;
  int i = 0;
  while (x <= y) {
    x *= 2, i++;
  }
  cout << i;
  return 0;
}
