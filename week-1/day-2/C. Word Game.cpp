/**
 * author: Samiul Basir Fahim,
 * title: C. Word Game.cpp,
 **/
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int testcases;
  cin >> testcases;
  while (testcases--) {
    int n;
    cin >> n;
    map<string, vector<int>> words;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < n; j++) {
        string s;
        cin >> s;
        words[s].push_back(i);
      }
    }
    vector<int> points(3, 0);
    for (auto [w, l] : words) {
      for (int it : l) {
        if (l.size() == 1) {
          points[it] += 3;
        } else if (l.size() == 2) {
          points[it] += 1;
        }
      }
    }
    for (auto p : points) {
      cout << p << ' ';
    }
    cout << '\n';
  }
  return 0;
}
