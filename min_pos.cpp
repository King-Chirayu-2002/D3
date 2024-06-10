#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int const N = 1e6+2;
    bool no[N];
    for(int i=0;i<N;i++){
        no[i]=false;
    }
    for (int i = 0; i < n; i++)
    {
        no[arr[i]]=true;
    }
    for(int i=0;i<N;i++){
        if(no[i]=false){
            cout<<i;
            return 0;
        }
    }
    return 0;
}