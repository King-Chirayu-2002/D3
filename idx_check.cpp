#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n ;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    const int N =1e2+6;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    int minIdx=10000;
    for (int i = 0; i < n; i++)
    {
        if(idx[arr[i]]!=-1){
            minIdx = min(idx[arr[i]],minIdx);
        }else{
            idx[arr[i]]=i;
        }
    }
    cout<<minIdx;    
    return 0 ;
}