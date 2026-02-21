#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    string ans;
    
    int n = s.size();
    
    for(int i=0 ; i<n ; i++){
    if (s[i] == 'W' && i+2 < n && s[i+1] == 'U' && s[i+2] == 'B'){
    if (!ans.empty() && ans.back() != ' ')
    ans.push_back(' ');
        i+=2;
    }
    else{
        ans.push_back(s[i]);
    }
    }
    
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i];
    }
    
    return 0;
}
