#include<iostream>
#include<array>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    
    float sum = 0;
    for(int i=0 ; i<n ; i++){
        sum += arr[i];
    }
    
    float final = sum/n;
    
    cout<<final<<endl;
}
