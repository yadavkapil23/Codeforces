#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    
    string v;
    getline(cin,v);
    
    string v2;
    getline(cin,v2);
    string result;
    
    for(int i=0 ; i<v.length() ; i++){
            if(v[i] == v2[i]){
               result.push_back('0'); 
            }
            else{
                result.push_back('1');
        }
    }
    
    for(int i=0 ; i<result.length() ; i++){
        cout<<result[i];
    }
    return 0;
}
