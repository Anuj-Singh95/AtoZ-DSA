#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,1,1,1,1,4,2,3};
    int n=10;
    int k=7;
    int max=0,len;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            len=j-i+1;
            if(sum==k){
                if(len>max){
                    max=len;
                }
                break;
            }
        }
    }
    cout<<max;

    return 0;

}