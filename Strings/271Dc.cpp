#include "../Tries/stdtriefns.h"
#include <iostream>
using namespace std;
#define vi vector<int>;
#define ll long long

void solve() {
  string s;
  cin >> s;
  TrieNode *suffixtree = createSuffixTree(s);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
}