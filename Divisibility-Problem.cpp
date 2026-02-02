#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<pair<int,int>> v(n);
    int a,b;
    for(int i=0 ; i<n ; i++){
        cin>>v[i].first>>v[i].second;
    }
    
    for(int i=0 ; i<n ; i++){
        int start = v[i].first;
        int end = v[i].second;
        int count = 0;
        int rem = start%end;
        if(rem==0){
            cout<<count<<endl;
        }
        else{
            count = end - rem;
            cout<<count<<endl;
        }
    }
    return 0;
}
