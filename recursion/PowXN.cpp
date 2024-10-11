#include<bits/stdc++.h>
using namespace std;
    double myPow(double x, int n) {
       double ans = 1;
       int nn = n;
       if(nn<0) nn=nn*(-1);
       while(nn>0){
        // cout<<"nn="<<nn<<endl;
        if(nn%2==1){
            ans = ans * x;
            // cout<<"ans="<<ans<<endl;
            nn--;
        }else{
            x=x*x;
            // cout<<"x = "<<x<<endl;
            nn=nn/2;
        }
       }
       if(n<0) return (double)1/(double)ans;
       return ans;

    }
int main(){

    cout<<"ans"<<myPow(2,10);

    return  0;
}