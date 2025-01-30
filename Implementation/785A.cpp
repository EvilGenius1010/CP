#include <iostream>
using namespace std;
#define vi vector<int>;
#define ll long long

void solve() {
  int n;
  cin >> n;
  string k;
  int sides=0;
  while(n--){
    cin>>k;
    if(k=="Tetrahedron")sides+=4;
    else if(k=="Cube")sides+=6;
    else if(k=="Octahedron")sides+=8;
    else if(k=="Dodecahedron")sides+=12;
    else if(k=="Icosahedron")sides+=20;
  }
    cout<<sides<<"\n";

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);


    solve();
}
