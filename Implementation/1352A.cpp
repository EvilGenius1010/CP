#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
#define vi vector<int>;
#define ll long long

void solve() {
int n;
cin >> n;
int temp = n;
//unless less than 10 number%10 must be 0.

int factor=0;
vector<int> kterms;
while(temp>9){
    if(temp%10==0){
        temp /= 10;
        factor++;
    }
    else{
        kterms.push_back((temp%10)*pow(10,factor));
        factor++;
        temp/=10;
    }

}
kterms.push_back(temp*pow(10,factor));
cout<<kterms.size()<<"\n";
vector<int>::iterator begin = kterms.begin();
while(begin!=kterms.end()){
    cout<<*begin<<" ";
    begin++;
}
cout<<"\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}
