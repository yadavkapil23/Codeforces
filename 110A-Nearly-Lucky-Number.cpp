#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count = 0;
    
    for(int i=0 ; i<s.size(); i++){
        if(s[i] == '7' || s[i] == '4'){
            count++;
        }
    }
    if(count == 4 || count ==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
