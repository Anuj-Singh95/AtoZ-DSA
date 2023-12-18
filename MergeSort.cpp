#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int mid, int r){
    int temp[r+1];
    int i=0;
    int left=l;
    int right=mid+1;
    while(left<=mid && right<=r){
        if(arr[left]<arr[right]){
            temp[i]=arr[left];
            i++;
            left++;
        }else{
            temp[i]=arr[right];
            i++;
            right++;
        }
    }
    while(left<=mid){
        temp[i]=arr[left];
        i++;
        left++;
    }
    while(right<=r){
        temp[i]=arr[right];
        i++;
        right++;
    }
    for(int j=0;j<=r-l;j++){
        arr[l+j]=temp[j];
    }
}

void mergeSort(int arr[], int l, int r) {
    // Write Your Code Here
    if(l>=r){
        return;
    }
    int mid=(l+r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);

    merge(arr,l,mid,r);
}
int main(){
    int arr[]={2, 13, 4 ,1 ,3, 6 ,28};
    mergeSort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}