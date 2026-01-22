#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,hf;
    cin>>n>>hf;
    
    vector<int> v(n);
    
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    
    int total = 0;
    
    for(int i=0 ; i<n ; i++){
        if(v[i] > hf){
            total += 2;
        }
        else if(v[i] <= hf){
            total += 1;
        }
    }
    
    cout<<total<<endl;
    return 0;
    
}
