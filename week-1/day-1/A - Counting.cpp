/**
 * author: Samiul Basir Fahim,
 * title: A - Counting.cpp,
 **/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int a, b;
  cin >> a >> b;
  if (a > b) {
    cout << "0\n";
  } else {
    cout << b - a + 1 << '\n';
  }
  return 0;
}
