#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> palindromes;

void generate_palindromes() {
  for (int i = 0; i < (1 << 15); i++) {
    string s = to_string(i), rs = s;
    reverse(s.begin(), s.end());
    if (s == rs)
      palindromes.push_back(i);
  }
}

int main() {
  generate_palindromes();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    long long cnt = n;
    vector<int> a(n), freq((1 << 15), 0);
    for (auto &i : a)
      cin >> i, freq[i]++;
    for (auto i : a)
      for (auto j : palindromes)
        cnt += freq[i ^ j];
    cout << cnt / 2 << '\n';
  }
}
