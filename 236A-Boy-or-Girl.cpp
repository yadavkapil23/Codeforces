#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    set<char> myset;
    for(int i=0 ; i<s.length() ;i++){
        char x = s[i];
        myset.insert(x);
    }
    
    int setlen = myset.size();
    
    if(setlen%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}
