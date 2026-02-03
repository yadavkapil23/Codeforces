#include<iostream>
#include<algorithm>
#include<set>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    set<char> st;
    string s;
    char  a;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        a = tolower(a);
        st.insert(a);
    }
    
    
    int x = st.size();
    if(x<26){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}
