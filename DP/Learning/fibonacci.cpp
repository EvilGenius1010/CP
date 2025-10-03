#include <iostream>
#include <vector>
using namespace std;

// fibonacci is f(n)=f(n-1)+f(n-2)

int f(int n, vector<int> &dp) {
  if (n <= 1) {
    // cout<<n<<"\n";
    dp[n] = n;
    return n;
  }
  if (dp[n] != -1)
    return dp[n];

  dp[n] = f(n - 1, dp) + f(n - 2, dp);
  return f(n - 1, dp) + f(n - 2, dp);
}

void solve() {
  int n;
  cin >> n;

  // int dp[n+1]={-1};
  //
  vector<int> dp(n + 1, -1);
  cout << f(n, dp) << "\n";

  // for (unsigned int i = 0; i < dp.size(); i++) {
  //   cout << "i is" << i << "for  " << dp[i] << "\n";
  // }
  // cout << endl;
}

int main() {

  solve();

  return 0;
}
