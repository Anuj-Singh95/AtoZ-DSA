#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        if(i==1){
            cout<<1;
            for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        }else{
            cout<<i;
            for(int j=1;j<=((2*n-1)-2*(n-i)-2);j++){
            cout<<" ";
            }
        cout<<i;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
            }
        }
        cout<<endl;
    }
}