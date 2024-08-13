#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,m;
    while(t--){
        cin>>n>>m;
        if(n*m==1){
            cout<<1<<endl;

        }
        else{
            cout<<((n*m)/2+(n*m)%2)<<endl;
        }
    }
    return 0;
}