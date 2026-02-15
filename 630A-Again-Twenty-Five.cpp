#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    long ans = pow(5,n);
    int digit = ans % 100;
    cout<<digit;
    return 0;
}
