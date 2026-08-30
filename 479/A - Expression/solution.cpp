#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    
    int first = a+b*c;
    int second = a*(b+c);
    int third = a*b*c;
    int fourth = (a+b)*c;
    int fifth = a+b+c;
    int sixth = a*b+c;
    
    vector<int> v;
    v.push_back(first);
    v.push_back(second);
    v.push_back(third);
    v.push_back(fourth);
    v.push_back(fifth);
    v.push_back(sixth);
    
    
    sort(v.begin(),v.end());
    
    cout<<v[5]<<" ";
    
    return 0;
}