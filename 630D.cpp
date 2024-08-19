#include<iostream>
using namespace std;




int main(){
    long long n;
    cin>>n;

    // for(int i=1;i<=n;i++){
    //     // hex+= i*6;
    //     mul += i;
    // }
    //dont use fucking for loops. 
    //Its an AP.


    cout<<((n*3*(n+1))+1)<<endl;
    return 0;
}