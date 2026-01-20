#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int digit;
    
    for(int i=1 ; i<=k; i++){
        digit = n%10;
        if(digit!= 0){
            n = n-1;
    }
    else if(digit == 0){
        n = n/10;
    }
    }
    cout<<n<<endl;
    return 0;
}
