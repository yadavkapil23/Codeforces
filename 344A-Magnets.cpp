#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<string> v;
    
    for(int i=0 ; i<n ; i++){
        string x;
        cin>>x;
        v.push_back(x);
    }
    
    int count = 1;
    
    for(int i=0 ; i<n-1 ; i++){
        if(v[i] != v[i+1]){
            count += 1;
        }
    }
    
    cout<<count<<endl;
    return 0;
}
