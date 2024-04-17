#include <iostream>
#include <vector>
#define inpvec(x) for(auto &i : x) cin >> i;
using namespace std;

void solve() {
  int n;  cin >> n;
  vector<int> a(n);
  inpvec(a);
  int answer = a[0];
  for(int i : a)  answer&=i;
  cout << answer << '\n';
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cout.tie(nullptr), cin.tie(nullptr);
  int testcases;  cin >> testcases;
  while (testcases--) solve();
  return 0;
}
