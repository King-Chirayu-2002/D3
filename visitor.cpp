#include<bits/stdc++.h>
using namespace std;
int find_record(int v[],int n){
    if(n==0){
        return -1;
    }else if(n==1){
        return 1;
    }
    int til_max = v[0];
    int ans =0;
    for(int i=0;i<n-1;i++){
        if((til_max<v[i]||i==0) && (   i==n-1 || v[i]>v[i+1])){
            ans++;
            til_max=v[i];
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<find_record(v,n);
    return 0;
}