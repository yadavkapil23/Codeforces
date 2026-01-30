#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    for(int i=0 ; i<s.length() ; i++){
        if(int(s[0]) >=65 && int(s[0]) <= 90){
            continue;
        }
        else{
            s[0] -= 32;
        }
    }
    
    for(char c : s){
        cout<<c;
    }
    return 0;
}
