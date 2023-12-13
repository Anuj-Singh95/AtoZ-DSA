#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0,sum=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" "<<n/i<<" ";
            if(i!=n/i){
                count=count+2;
                sum=sum+i+n/i;
            }else{
                count++;
                sum=sum+i;
            }
        }
    }
    cout<<"count= "<<count<<"sum = "<<sum;

    return 0;
}