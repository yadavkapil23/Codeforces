#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int count = 0;
    pair<int,int> position;
    pair<int,int> distance;
    vector<vector<int>> v(5, vector<int>(5));
    
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            cin>>v[i][j];
        }
    }
    
    
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            if(v[i][j] == 1 ){
                position = {i,j};
            }
    }
    }
    distance = {abs(position.first-2),abs(position.second-2)};
    count = distance.first + distance.second;
    cout<<count<<endl;
    return 0;
}
