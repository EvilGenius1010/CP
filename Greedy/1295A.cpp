#include <iostream>
using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  // map<int, int> m;
  // m[0] = 6;
  // m[1] = 2;
  // m[2] = 5;
  // m[3] = 5;
  // m[4] = 4;
  // m[5] = 5;
  // m[6] = 6;
  // m[7] = 3;
  // m[8] = 7;
  // m[9] = 6;

  while (t--) {

    int n;
    cin >> n;

    string ans = "";
    // while (n > 2) {
    //   for () {
    //   }
    // }
    if (n % 2 == 0) {
      while (n != 0) {
        n = n - 2;
        ans == 0 ? ans.concat("1") : ans.concat("1");
      }
    } else {
      while (n != 0) {
        ans == 0 ? (ans.concat("7"), n = n - 3) : (ans.concat("1"), n = n - 2);
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
