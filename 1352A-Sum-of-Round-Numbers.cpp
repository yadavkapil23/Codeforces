#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;

    vector<string> inputs;
    
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        inputs.push_back(s);
    }
    
    vector<pair<int, vector<int>>> outputs;
    
    for(const string& s : inputs){
        int len = s.length();
        vector<int> ans;
        
        for(int j=0; j<len; j++){
            if(s[j] != '0'){
                int digit = s[j]-'0';
                int power = len-1-j;
                int term = digit * pow(10,power);
                ans.push_back(term);
            }
        }
        outputs.push_back({ans.size(), ans});
    }

    for(const auto& output : outputs){
        cout<<output.first<<endl;
        
        for(int i=0; i<output.second.size(); i++){
            cout<<output.second[i];
            if(i!=output.second.size()-1) 
                cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
