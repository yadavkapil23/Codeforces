#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //finding the kth player scores.
    int k;
    int n;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    
    int count=0;
    int kthscore;
     kthscore = v[k-1];
     
             
        if(k>n){
            return 0;
        }
        
    for(int i=0 ; i<n ; i++){
        
        if(v[i] == 0){
            continue;
        }
        else if(v[i] >= v[k-1]){
            count++;
        }
    }
    
    cout<<count<<endl;
    return 0;
}
