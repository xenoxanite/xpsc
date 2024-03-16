/**
 * author: Samiul Basir Fahim,
 * title: A. Ebony and Ivory.cpp,
 **/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, c;
  cin >> a >> b >> c;

  for (int i = 0; i <= c; i++) {
    for (int j = 0; j <= c; j++) {
      if ((a * i) + (b * j) == c) {
        cout << "Yes";
        return 0;
      }
    }
  }
  cout << "No";
  return 0;
}
