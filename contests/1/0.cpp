#include<iostream>
#include<string>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int a;
    cin>>a;
    string k;
    k = to_string(a);
    if(k[0]=='1'&& k[1]=='0' && k[2]!='0' && a!=101 && a!=1000 && a!=10000  ){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}