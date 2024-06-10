#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int i=0,j=0,sum=0,st=-1,en=-1;
    while(j<n){
        sum+=arr[j];
        while(sum>target){
            sum-=arr[i];
            i++;
        }
        if(sum==target){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout<<st<<en<<endl;
    return 0;
}