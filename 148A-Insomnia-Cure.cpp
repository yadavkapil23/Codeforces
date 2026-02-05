#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    
    set<int> st;
    
    for(int i=1 ; i<=d ; i++){
        if(k<=d && i%k == 0){
            st.insert(i);
        }
        if(l<=d && i%l == 0){
            st.insert(i);
        }
        if(m<=d && i%m == 0){
            st.insert(i);
        }
        if(n<=d && i%n == 0){
            st.insert(i);
        }
    }
    
    cout<<st.size()<<endl;
    return 0;
}
