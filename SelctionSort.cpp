#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={13,46,24,52,20,9};
    int n=6;
    
    for(int i=0;i<n-1;i++){
        int min=arr[i];
        int p;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                p=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[p];
        arr[p]=temp;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}