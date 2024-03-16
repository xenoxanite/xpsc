/**
 * author: Samiul Basir Fahim,
 * title: B - How many?.cpp,
 **/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int s, t;
  cin >> s >> t;

  int count_ = 0;

  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j <= 100; j++) {
      for (int k = 0; k <= 100; k++) {
        if ((i + j + k) <= s && (i * j * k) <= t) {
          count_++;
        }
      }
    }
  }
  cout << count_;
  return 0;
}
