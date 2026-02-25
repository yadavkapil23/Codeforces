#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    
    cin>>n>>m;
    
    int a;
    vector<int> v;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        v.push_back(a);
    }
    
    int count = 0;
    int sum = 0;
    sort(v.begin(),v.end());
    for(int i=0 ; i<n ; i++){
        if(v[i] <= 0 && count<m){
            sum += v[i];
            count++;
        }
    }
    cout<<abs(sum);
    
    return 0;
}
