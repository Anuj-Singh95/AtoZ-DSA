#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10000000;
    vector<bool> isPrime(n,1);

    for(int i=2;i<n;i++){
        if(isPrime[i]==1){
            for(int j=i*2;j<n;j=j+i){
                isPrime[j]=0;
            }
        }
    }

    for(int i=2;i<100;i++){
        cout<<i<<" ";
        if(isPrime[i]==1){
            cout<<"prime"<<endl;
        }else{
            cout<<"not prime"<<endl;
        }
    }
}