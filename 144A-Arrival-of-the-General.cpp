#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
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
    
    
    int count = 0;
    int maxin;
    int minin;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    
    for(int i=0; i<n ; i++){
        if(v[0] == maxi){
            count = 0;
        }
    }

    //Maximum : If there are several soldiers with maximum height, use the one already closest to the front.
    for(int i=0 ; i<n ; i++){
        if(v[i] > maxi){
            maxi = v[i];
            maxin = i;
        }
    }
    //Minimum  : If there are several soldiers with minimum height, use the one already closest to the end.
    for(int i=0 ; i<n ; i++){
        if(v[i] <= mini){
            mini = v[i];
            minin = i;
        }
    }
        
    count = maxin + (n-1-minin);
    
    if (maxin > minin) count--;

    
    cout<<count<<endl;
    return 0;
}
