#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    vector<string> v;
    
    unordered_map<string,int> mp;
    
    for(int i=0 ; i<n-1 ; i++){
        string a = "";
        a += s[i];
        a += s[i+1];
        v.push_back(a);
    }
    
    for(string &x : v){
        mp[x]++;
    }
    
    vector<pair<string,int>> vec(mp.begin(), mp.end());
    
    sort(vec.begin(),vec.end(), [](auto &s1,auto &s2){
        return s1.second > s2.second;
    });
    
    cout << vec[0].first<<endl;
    return 0;
}