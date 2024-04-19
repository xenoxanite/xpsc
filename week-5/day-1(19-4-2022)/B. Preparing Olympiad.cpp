#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
#define ll long long int
#define invec(x) for(auto &i:x) cin >> i;
using namespace std;

int main (int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);

  int n, l, r, x;       cin >> n >> l >> r >> x;
  vector<int> a(n);     invec(a);
  int total_possiblities = (1 << n), cnt = 0;
  
  for(int i = 0; i < total_possiblities; i++){
    ll total_difficulties = 0;
    int mn = INT_MAX, mx = INT_MIN;
    for(int bit = 0; bit < n; bit++){
      if(i&(1 << bit)){
        total_difficulties+=a[bit];
        mn = min(mn, a[bit]), mx = max(mx, a[bit]);
      }
    }
    int dif = mx - mn;
    if(l <= total_difficulties && total_difficulties <= r && x <= dif) cnt++;
  }

  cout << cnt;
  return 0;
}
