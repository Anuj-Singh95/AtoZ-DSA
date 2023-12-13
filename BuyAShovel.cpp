#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r,count=1;
    cin>>k>>r;
    while(true){
        int x=k*count;
        if((x%10)==r || (x%10)==0){
            break;
        }
        count++;
    }
    cout<<count<<endl;
    return 0;
}