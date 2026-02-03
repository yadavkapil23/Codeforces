#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int p,q;
    cin>>p;
    
    set<int> st;
    int a;
    for(int i=0 ; i<p ; i++){
        cin>>a;
        st.insert(a);
    }
    
    int b;
    cin>>q;
    for(int i=0 ; i<q ; i++){
        cin>>b;
        st.insert(b);
    }
    
    if(st.size() == n){
        cout<<"I become the guy.";
    }
    else if(st.size() < n){
        cout<<"Oh, my keyboard!";
    }
    
    return 0;
}
