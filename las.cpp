#include<bits/stdc++.h>
using namespace std;
int lsa(int arr[],int n){
    if(n==1 || n==0){
        return 0;
    }
    int curr =arr[1]-arr[0];
    int curr_len=2;
    int ans =0;

    for(int i=1;i<n-1;i++){
        if(curr==arr[i+1]-arr[i]){
            curr_len++;
            ans=max(curr_len,ans);
        }else{
            curr_len=2;
            curr = arr[i+1]-arr[i];
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while (t)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<lsa(arr,n);
        t--;
    }
    return 0;
}