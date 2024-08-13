#include<iostream>
using namespace std;

int main(){
int t; 
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int check[n];
    for(int i=0;i<n;i++){
        check[i]=0;
    }
    int k=0;
    for(;k<n;k++){
        if(k==0){
            check[a[0]-1]=1;
        }
        else{
            if(check[a[k]-2]==1 || check[a[k]]==1){
                check[a[k]-1]=1;
            }
            else{
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    if(k==n){
    cout<<"YES"<<endl;
    }

}
    return 0;
}