#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,x;
    while(t--){
        cin>>n>>x;
        int floor=1;
        if(n<=2){
            cout<<floor<<endl;
            continue;
        }
        int iter=2;
        while(iter<n){
            iter = iter+x;
            floor = floor+1;
        }
        cout<<floor<<endl;
    }
    return 0;
}