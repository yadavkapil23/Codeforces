#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    cin.ignore();
    string s;
    getline(cin,s);
    
    int A = count(s.begin(),s.end(),'A');
    int D = count(s.begin(),s.end(),'D');
    
    if(A>D){
        cout<<"Anton"<<endl;
    }
    else if(A<D){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;

}
