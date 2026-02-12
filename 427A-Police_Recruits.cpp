#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int available_officers = 0;
    int untreated_crimes = 0;
    
    int a;
    
    for(int i=0 ; i<n ; i++){
        cin>>a;
        
        if(a==-1){
            if(available_officers > 0){
                available_officers--;
            }
            else{
                untreated_crimes++;
            }
        }
        else{
            available_officers += a;
        }
    }
    cout<<untreated_crimes<<endl;
    return 0;
}
