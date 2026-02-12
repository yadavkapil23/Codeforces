#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> v;
    int a,b,c;
    cin>>a>>b>>c;
    
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    
    sort(v.begin(),v.end());
    
    int result = (v[1]-v[0]) + (v[2]-v[1]);
    cout<<result;
}
