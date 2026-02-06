#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int> home(n);
    vector<int> guest(n);
    
    for(int i=0 ; i<n ; i++){
        cin>>home[i]>>guest[i];
    }
    
    int count = 0;
    for(int i=0 ; i<home.size() ; i++){
        for(int j=0 ; j<guest.size() ; j++){
            if(home[i] == guest[j]){
                count++;
            }
        }
    }
    
    cout<<count<<endl;
    return 0;
}
