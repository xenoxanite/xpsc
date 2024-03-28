#include <iostream>
#include <vector>
#define ll long long
using namespace std;

bool checkP(vector<ll> &v) {
  ll i = 0, j = v.size() - 1;
  while (i < j) {
    if (v[i] != v[j])
      return false;
    else
      i++, j--;
  }
  return true;
}
bool check(vector<ll> &a, ll x) {
  vector<ll> b;
  for (ll i : a) {
    if (i != x)
      b.push_back(i);
  }
  return checkP(b);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll tcase;
  cin >> tcase;
  while (tcase--) {
    ll n;
    cin >> n;
    vector<ll> vec(n);

    for (ll &i : vec)
      cin >> i;

    if (n <= 2) {
      cout << "YES" << endl;
      continue;
    }
    if (checkP(vec)) {
      cout << "YES" << endl;
      continue;
    }
    bool status = false;
    ll i = 0, j = n - 1;
    while (i < j) {
      if (vec[i] != vec[j]) {
        status = check(vec, vec[i]) || check(vec, vec[j]);
        break;
      }
      i++, j--;
    }
    cout << (status ? "YES" : "NO") << '\n';
  }

  return 0;
}
