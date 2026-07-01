#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    vector<int> narr;
    for(int i=0 ; i<t ; i++){
        cin>>n;
        narr.push_back(n);
    }
    
    
    for(int i=0 ; i<t; i++){
        if(narr[i] == 2){
          cout << 2 << endl;
           continue;
        }
        if(narr[i] == 3){
          cout << 3 << endl;
           continue;
       }
 
         int result = narr[i]%4;
         if(result == 0){
          cout<<0<<endl; 
         }
         if(result == 1){
          cout<<1<<endl;  
         }
          if(result == 2){
          cout<<0<<endl; 
         }
         if(result == 3){
          cout<<1<<endl;   
         }
    }
    return 0;
}