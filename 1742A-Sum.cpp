#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    int a,b,c;
    
    for(int i=0 ; i<n ; i++){
        cin>>a>>b>>c;
        v1.push_back(a);
        v2.push_back(b);
        v3.push_back(c);
    }
    
    for(int i=0 ; i<n ; i++){
        if(v1[i] == v2[i] + v3[i] || v2[i] == v1[i]+v3[i] || v3[i] == v2[i]+v1[i]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
