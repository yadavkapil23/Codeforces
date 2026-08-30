#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int> lucky = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for(int i=0 ; i<lucky.size() ; i++){
        if(n%lucky[i] == 0){
            cout<<"YES"<<" ";
            return 0;
        }
    }
    
    string s = to_string(n);
    bool flag = true;
    
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == '4' || s[i] == '7'){
            flag = true;
            continue;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag){
    cout<<"YES"<<" ";
    }
    else{
        cout<<"NO"<<" ";
    }
    
    return 0;
}