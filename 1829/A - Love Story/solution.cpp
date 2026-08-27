#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string inp = "codeforces";
    
    while(t--){
        string s;
        cin>>s;
        int count = 0;
        
    for(int i=0 ; i<s.size() ; i++){
        if(inp[i] != s[i]){
            count++;
        }
    }
    
    cout<<count<<endl;
    
    }
    return 0;
}