#include <iostream>
using namespace std;

int main() {
  int t, n;
  cin >> t;
  cin >> n;

  int a[n], s[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  if (s[0] == 'L') {
    int l = 0, r = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'R') {
        r = i + 1;
        while (l < r) {
          sum += a[l];
          a[l] = 0;
          l++;
        }
      }
    }
  }

  else if (s[0] == 'R') {
    int l = 0, r = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'L') {
        r = i + 1;
        while (l < r) {
          sum += a[l];
          a[l] = 0;
          l++;
        }
      }
    }
  }

  return 0;
}
