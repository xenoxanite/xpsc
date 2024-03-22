#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int testcases;
  cin >> testcases;
  while (testcases--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c)
      cout << "+\n";
    else
      cout << "-\n";
  }
  return 0;
}
