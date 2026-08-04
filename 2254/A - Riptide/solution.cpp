#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    while(n--){
    int count = 0;
    int Alice;
    cin>>Alice;
    int Bob;
    cin>>Bob;
    int Charlie;
    cin>>Charlie;
    
    if(Alice == Bob || Bob == Charlie || Charlie ==  Alice){
        cout<<count<<endl;
        continue;
    }
    
    else{
        while(Alice != Bob && Bob != Charlie && Alice != Charlie){
            int maxi = max({Alice,Bob,Charlie});
            if(maxi == Alice){
                Alice--;
            }
            else if(maxi == Bob){
                Bob--;
            }
            else{
                Charlie--;
            }
            
            int mini = min({Alice,Bob,Charlie});
            if(mini == Alice){
                Alice++;
                count++;
            }
            else if(mini == Bob){
                Bob++;
                count++;
            }
            else{
                Charlie++;
                count++;
            }
        }
    }
    cout<<count<<endl;
    
}
}