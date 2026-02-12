#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int a,b;
    vector<vector<int>> v(n,vector<int> (n));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>v[i][j];
        }
    }
    
    int count = 0;
    
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(v[i][j] == 1 && v[j][i] == 1){
                    count++;
            }
        }
    }
    
    cout<<count<<endl;
    
}
