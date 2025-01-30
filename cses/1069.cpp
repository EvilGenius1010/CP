#include <iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void solve() {

  string s;
  cin>>s;
  // cout<<s;
  char alphabet=s[0];
  int counter=1;
  int max_count=1;
  for(int i=1;i<s.length();i++){
    if(s[i]==alphabet){
      counter++;
      if(counter>max_count){max_count=counter;}
      // cout<<counter<<el;
      continue;
    }
    else{
      alphabet=s[i];
      counter=1;
      // cout<<counter<<el;
    }
  }

cout<<max_count<<el;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);


    solve();
}
