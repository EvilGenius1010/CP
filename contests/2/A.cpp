#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int c;
        string s;
        cin>>c>>s;
        vector<char> uniq;
        for(int i=0;i<c;i++){
            bool flag=false;
            for(int j=0;j<c;j++){
                if (s[i] == s[j]){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                uniq.push_back(s[i]);
            }
        }
        int substrlen = c/uniq.size();

        vector<char> first,last;
        int curr=0;
        for(int i=0;i<c;i++){
            first.push_back(s[curr]);
            for(int j=0;j<first.size();j++){
            if(s[curr+substrlen]==first[j]){
                
            }

            }

            s.substr(curr,substrlen);

        }
    }
    return 0;
}