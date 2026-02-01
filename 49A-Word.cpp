#include<iostream>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    int upcount = 0;
    int lowcount = 0;
    for(char c : s){
        if(isupper(c)){
        upcount++;
    }
    else{
        lowcount++;
    }
    }
    
    string result;
    if(upcount > lowcount){
        //convert all toupper case.
    for(int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
        result.push_back(s[i]);
    }
    }
    else{
        //convert to lowercase;
    for(int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
        result.push_back(s[i]);
    }
    }
    
    for(int i=0 ; i<result.size() ; i++){
        cout<<result[i];
    }
    return 0;
}
