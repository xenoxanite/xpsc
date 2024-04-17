#include <algorithm>
#include <iostream>
#include <vector>
#define invec(x) for(auto &i : x) cin >> i;
#define all(x) x.begin(), x.end() 

using namespace std;

void solve() {
  int n;  cin >> n;
  vector<int> a(n);
  invec(a);
  sort(all(a));
  int msb = __lg(a[n-1]);
  int mn = 0, mx = 0;
  for(int i = 0; i<msb;i++){
    for(int j : a){
      if(j & (1 << i)){
        mx|=(1 << i);
      }    }
  }
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cout.tie(nullptr), cin.tie(nullptr);
  int testcases;  cin >> testcases;
  while (testcases--) solve();
  return 0;
}
