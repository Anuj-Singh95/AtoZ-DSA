#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100];
    int l=0;
    for(int i=2;i*i<=n;i++){
        while (n%i ==0)
        {
            arr[l]=i;
            l++;
            n=n/i;
        }
        
    }
    if(n!=0){
        arr[l]=n;
        l++;
    }
    for(int i=0;i<l;i++){
        cout<<" "<<arr[i];
    }


    return 0;
}