#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1;
    getline(cin,s1);
    
    string s2;
    getline(cin,s2);
    
    auto itr1 = s1.begin();
    auto itr2 = s2.begin();
    
    while(itr1 != s1.end() && itr2 != s2.end()){
    int iascii = static_cast<int>(tolower(*itr1));
    int jascii = static_cast<int>(tolower(*itr2));
        if(iascii > jascii){
            cout<<1<<endl;
            return 0;
        }
        else if(iascii < jascii){
            cout<<-1<<endl;
            return 0;
        }
        itr1++;
        itr2++;
    }
    if(s1.length() > s2.length()){
         cout<<1<<endl;   
        }
    else if(s1.length() < s2.length()){
            cout<<-1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    
    return 0;
}
