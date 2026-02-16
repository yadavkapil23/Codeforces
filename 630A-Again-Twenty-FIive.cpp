#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    long long n;
    cin>>n;
    
    long long digit;
    
    if(n>=2){
        digit = 25;
    }
    else{
        digit = 5;
    }
    cout<<digit;
    return 0;
}
