#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<long long int> a(n);
  for (long long int &i : a)
    cin >> i;
  sort(a.begin(), a.end());
  priority_queue<long long int> pq;
  pq.push(a[n - 1]);
  for (int i = n - 2; i >= 0; i--) {
    if (pq.empty())
      pq.push(a[i]);
    if (pq.top() >= a[i]) {
      long long int top = pq.top();
      pq.pop();
      pq.push(top ^ a[i]);
    } else {
      pq.push(a[i]);
    }
  }
  cout << pq.size() << '\n';
}

int main(int argc, char *argv[]) {

  ios::sync_with_stdio(false);
  cout.tie(nullptr), cin.tie(nullptr);

  int testcases;
  cin >> testcases;
  while (testcases--)
    solve();

  return 0;
}
