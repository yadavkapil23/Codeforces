#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    
    int required_money = 0;
    for(int i=1 ; i<=w ; i++){
        required_money += k*i;
    }
     
    if(n>=required_money){
        cout<<0<<endl;
    }
    else if(n<required_money){
        cout<<abs(n-required_money)<<endl;
    }
    
    return 0;
}
