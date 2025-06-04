#include <iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"
#include<templates/stdstringfns.h>

void solve() {
    string s;
    cin>>s;

    cout<<poly_hash_dev(s,31)<<"\n";

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);


    solve();
}
