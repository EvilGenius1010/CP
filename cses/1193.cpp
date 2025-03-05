#include <iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void dfs(){
    
}


void solve() {
  int n,m;
  cin >>n>>m;
  char lab[n][m];
  pair<int,int> a,b;


  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>lab[i][j];
        if(lab[i][j]=='A'){
            a={i,j};
        }
        else if(lab[i][j]=='B'){
            b={i,j};
        }
    }
  }
  



}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);


    solve();
}
