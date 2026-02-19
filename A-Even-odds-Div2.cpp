#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long val;

    long long oddcount = (n+1)/2;
    
    if(k<=oddcount){
        val = 2*k-1;
    }
    else{
        val = 2*(k-oddcount);
    }
    
    cout<<val<<endl;
    
    return 0;
}
