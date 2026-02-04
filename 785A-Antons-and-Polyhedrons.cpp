#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int x;
    
    string s;
    vector<string> v;
    for(int i=0 ; i<n ; i++){
        cin>>s;
        v.push_back(s);
    }
    
    int count=0;
    
    for(int i=0 ; i<n ; i++){
        if(v[i] == "Tetrahedron"){
            x=4;
        }
        if(v[i] == "Cube"){
            x=6;
        }
        if(v[i] == "Octahedron"){
            x=8;
        }
        if(v[i] == "Dodecahedron"){
            x=12;
        }
        if(v[i] == "Icosahedron"){
            x=20;
        }
        count += x;
        
    }
    
    cout<<count<<endl;
    return 0;
}
