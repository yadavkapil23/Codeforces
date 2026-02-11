#include<algorithm>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    
    string s;
    
    vector<string> v;
    vector<string> result;
    
    for(int i=0 ; i<n ; i++){
        getline(cin,s);
        v.push_back(s);
    }
    
    for(int i=0;i<n;i++){
        if(v[i]=="YES" || v[i]=="Yes"  || v[i]=="yES"  || v[i]=="YeS" || v[i] == "yes" || v[i]=="YEs" || v[i]=="yEs" || v[i]=="yeS"){
            result.push_back("YES");
        }
        else{
           result.push_back("NO");
        }
    }
    
    for(int i=0 ; i<result.size() ; i++){
        cout<<result[i]<<endl;
    }
    
    return 0;
}
