#include<bits/stdc++.h>
using namespace std;
int n =5;
void swap(int arr[],int f,int s){
    int a  =arr[f];
    arr[f]=arr[s];
    arr[s]=a;
    return;
}
void print(int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return ;
}
int main(){
    int arr[n]={4,8,2,3,9};
    char a;
    cin>>a;
    switch (a)
    {
    case 'a'://selection sort
        for (int i = 0; i < n; i++)
        {
            int min_idx = i;
            for(int j=i+1;j<n;j++){
                if(arr[min_idx]>arr[j]){
                    min_idx=j;
                }
            }
            swap(arr,i,min_idx);
        }
        print(arr);
        break;
    case 'b'://bubble sort
        for (int i = 0; i < n-1; i++)
        {
            int f=0,s=1;
            while(s<n-i){
                if(arr[f]>arr[s]){
                    swap(arr,f,s);
                }
                f++;
                s++;
            }
        }
        print(arr);
        break;
    case 'c'://insertion sort
        for (int i = 1; i < n; i++)
        {
            int current = arr[i];
            int j=i-1;
            while(j>=0 && current<arr[j]){
                arr[j+1]=arr[j];
                j--;
            }
            j++;
            arr[j]=current;
        }
        print(arr);
        break;    
    default:
        break;
    }
    return 0;
}