#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int k, s;
  cin >> k >> s;
  int cnt = 0;
  for (int x = 0; x <= k; x++)
    for (int y = 0; y <= k; y++)
      if (s - x - y <= k && s - x - y >= 0)
        cnt++;

  cout << cnt;
  return 0;
}
