#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int> v;
    int a;
    for(int i=0 ; i<n ; i++){
        cin>>a;
        v.push_back(a);
    }
    
    sort(v.begin(),v.end(),greater<int>());
    
    int count=1;
    int sum=0;
    for(int i=0 ; i<n ; i++){
        sum += v[i];
    }
    
    int currsum=0;
    int semisum = sum/2;
    
    for(int i=0 ; i<n ; i++){
        currsum += v[i];
        if(currsum <= semisum){
            count++;
        }
        else{
            continue;
        }
    }
    
    cout<<count<<endl;
    return 0;
}
