#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define ll long long

void solve() {
  string s;
  cin >> s;
  int goodOrBad[26];
  vector<int> isGood;
  for (int i = 0; i < 26; i++) {
    cin >> isGood[i];
    if (isGood[i] == '1') {
      isGood.push_back(i);
    }
  }
  int k;
  cin >> k;

  char *l = &s[0];
  char *r = &s[0];

  vector<string> goodsubstrs;

  while (l == &s[s.length() - 1] && r == &s[s.length() - 1]) {
    string a = getStringBetweenptrs(l, r);
    if (checkIfGood(a, isGood, k)) {
      goodsubstrs.push_back(a);
    }
  }
}

string getStringBetweenptrs(char *left, char *right) {
  string substr;
  while (left <= right) {
    substr += *left;
  }
  return substr;
}

// char* is a ptr to a char
bool checkIfGood(string str, vector<int> goodChars, int k) {
  int checker = 0;
  for (int i = 0; i < str.length() - 1; i++) {
    if (find(goodChars.begin(), goodChars.end(), str[i] - 97) ==
        goodChars.end()) {
      checker++;
    }
  }
  if (checker <= k) {
    return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s = "hello wrld";
  char *l = &s[0];
  cout << *l << "\n";
  l = l + 1;
  cout << *l;
  // solve();
}
