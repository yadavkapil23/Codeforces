#include<iostream>
 
using namespace std;
 
int main(){
 
    int x,y,z;
 
    int n; //here n is test cases number;
 
    cin>>n;
 
     int count = 0;
 
    for(int i=0 ; i<n ; i++) {
 
        cin>>x>>y>>z;
 
    if(x==1 && y==1 && z==0){
 
        count++;
 
    }
 
    else if(y==1 && z==1 && x==0){
 
        count++;
 
    }
 
    else if(x==1 && z==1 && y==0){
 
        count++;
 
    }
 
    else if(x==1 && y==1 && z==1){
 
        count++;
 
    }
 
    }
 
    cout<<count<<endl;
 
    return 0;
 
}