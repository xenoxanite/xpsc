/**
 * author: Samiul Basir Fahim,
 * title: A - Biscuit Generator.cpp,
 **/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int a, b, t;
  cin >> a >> b >> t;
  cout << (t / a) * b << '\n';
  return 0;
}
