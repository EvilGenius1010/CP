#include <iostream>
#include<vector>
#include<map>
#include<cmath>
#include<stack>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void solve() {
string s;
cin>>s;
stack<char> st;
// vector<int> empty;
char prev='(';
int stacks=1;
for(int i=0;i<s.length();i++) {
    // if(st.empty()&& i!=0){
    //     empty.push_back(i-1);
    // }
    if(st.empty()){
        stacks=1;
    }
    if( prev==')'&& s[i]=='(' && stacks>=1){
        cout<<"YES"<<"\n";
        return;
    }
    if(s[i]=='('){
        st.push('(');
        stacks++;
        
    }
    else{
        st.pop();
        stacks=stacks-1;
    }
    prev=s[i];
}
cout<<"NO"<<"\n";
return;




// if(empty.size()==0){
//     cout<<"NO"<<"\n";
//     return;
// }else{
//     for(auto item:empty){
//         if(s[item+1]=='(' && s[item+2]!='('){
//             cout<<"YES"<<"\n";
//             return;
//         }
//     }
// }
// cout<<"NO"<<"\n";
// return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}
