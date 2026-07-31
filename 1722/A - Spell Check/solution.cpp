#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int length;
        cin>>length;
        string s;
        cin>>s;
        
        if(length != 5){
            cout<<"NO"<<endl;
            continue;
        }
        
        sort(s.begin(),s.end());
        
        if(s == "Timru"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
        return 0;
}