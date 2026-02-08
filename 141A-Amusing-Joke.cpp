#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    
    string s1;
    getline(cin,s1);
    
    string s2;
    getline(cin,s2);
    
    string s3;
    getline(cin,s3);
    
    map<char,int> m;
    for(char c : s1){
        m[c]++;
    }
    
    map<char,int> m2;
    for(char c : s2){
        m2[c]++;
    }
    
     for(auto &p : m2){ //merging the m2 into m.
         m[p.first] += p.second;
     }
     
     map<char,int> m3;
     for(char c : s3){
         m3[c]++;
     }
     
     bool ok = true;
     
     for(auto &p : m ){
        if(m3[p.first] != p.second){
                 ok = false;
                 break;
             }
         }
         
    for (auto &p : m3) {
    if (m[p.first] != p.second) {
        ok = false;
        break;
    }
    }
    if(ok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
     
     return 0;
}
