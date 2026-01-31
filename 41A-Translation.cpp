#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    string s2;
    getline(cin,s2);
    
    reverse(s.begin(),s.end());
    
    if(s==s2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
