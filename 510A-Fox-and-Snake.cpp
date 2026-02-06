#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m; //rows and cols.
    
    for(int i=1 ; i<=n ; i++){
        if(i%2!=0){
            int a = 1;
            while(a<=m){
                cout<<"#";
                a++;
            }
            cout<<endl;
        }
        
        else if(i%2==0){
            int y = i/2;
            if(y%2==0){
                int z = 2;
                cout<<"#";
                while(z<=m){
                    cout<<".";
                    z++;
                }
                cout<<endl;
            }
            
            else if(y%2!=0){
                 int x = 1;
                while(x<m){
                    cout<<".";
                    x++;
                }
                cout<<"#";
                cout<<endl;
            }
        }
    }
    return 0;
}
