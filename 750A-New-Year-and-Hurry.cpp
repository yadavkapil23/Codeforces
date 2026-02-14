#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    int minwithoutpath = 240-k;
    
    int sum=0;
    
    int count=0;
    for(int i=1 ; i<=n ; i++){
        sum += 5*i;
        if(sum > minwithoutpath){
            break;
            count--;
        }
        count++;
    }
    
    cout<<count<<endl;
}
