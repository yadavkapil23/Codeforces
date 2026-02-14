#include<algorithm>
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int> v;
    int a;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        v.push_back(a);
    }
    
    int best;
    int worst;
    
    int count = 0;
    
    best = v[0];
    worst = v[0];
    for(int i=0 ; i<n ; i++){
        if(v[i] > best){
            if(i==0){
                continue;
            }
            else{
            best  = v[i];
            count++;
        }
        }
        else if(v[i] < worst){
            if(i==0){
                continue;
            }
            else{
            worst = v[i];
            count++;
        }
        }
    }
    
    cout<<count<<endl;
    return 0;
}
