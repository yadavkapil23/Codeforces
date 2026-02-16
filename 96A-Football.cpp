#include<algorithm>
#include<iostream>
#include<string>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    int n = s.length();
    int count=1;
    int maxcount = 1;
    for(int i=0 ; i<n ; i++){
        if(i<n-1 && s[i] == s[i+1]){
            count++;
        }
        else{
            count = 1;
        }
        
        maxcount = max(count,maxcount);
        }
    
    
    if(maxcount>=7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}
