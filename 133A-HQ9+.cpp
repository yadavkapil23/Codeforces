#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    bool flag = false;
    
    for(int i=0; i<s.size() ;i++){
        if(s[i] == 'H' || s[i] == 'Q' ||s[i] == '9'){
            flag = true;
            break;
        }
        else{
            flag=false;
        }
    }
    
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}
