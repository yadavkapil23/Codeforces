#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x=0;
    int n;
    cin>>n;
    
    for(int i=0 ; i<n ; i++){
    string statement;
    cin>> statement;
    
    if(statement[1] == '+'){
        x++;
    }
    else if(statement[1] == '-'){
        x--;
    }
    }
    cout<<x<<endl;
    return 0;
}
