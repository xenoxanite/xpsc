/**
 * author: Samiul Basir Fahim,
 * title: A - Four Digits.cpp,
 **/
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> d;

  for (int i = 1; i <= 4; i++) {
    d.push_back(n % 10);
    n = n / 10;
  }

  for (int i = 3; i >= 0; i--) {
    cout << d[i];
  }
  return 0;
}
