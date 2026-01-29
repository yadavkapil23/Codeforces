#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    
    for(int i=1 ; i<=n ; i++){
        if(i%2==0){
            s.append("I love ");
        if(i<n){
            s.append(" that ");
        }
        }
        else if(i%2!=0){
            s.append("I hate ");
        if(i<n){
            s.append(" that ");
        }
        }
        if(i==n){
            s.append(" it ");
        }
    }
    
    for(int i=0 ; i<s.size() ; i++){
        cout<<s[i];
    }
    return 0;
}
