#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4, a[]={3, 4, 5, 2};
    int largest=a[0], smallest=a[0];
        int second_largest=0, second_smallest=1000000000;
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    cout<<largest<<endl<<smallest<<endl;
    for(int i=0;i<n;i++){
        if(a[i]>second_largest && a[i]!=largest){
            second_largest=a[i];
            cout<<"second largest"<<second_largest<<endl;
        }
        if(a[i]<second_smallest && a[i]!=smallest){
            second_smallest=a[i];
            cout<<"second smallest"<<second_smallest<<endl;
        }
    }
    cout<<"final result"<<endl;
    cout<<second_largest<<endl<<second_smallest<<endl;
    return 0;
}