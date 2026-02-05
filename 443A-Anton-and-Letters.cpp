#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    set<char> st;
    
    int n = s.length();
    char a;
    for(int i=0 ; i<n ; i++){
        if(s[i] == ' ' || s[i] == '{' || s[i] == '}' || s[i] == ','){
            continue;
        }
        else{
            st.insert(s[i]);
        }
    }
    
    int x = st.size();
    cout<<x<<endl;
    return 0;
}
