#include<bits/stdc++.h>
using namespace std;
int calcGCD(int n, int m){
    int divisor=min(n,m);
    int dividend=max(n,m);
    int rem=1,gcd=0;
    while (rem!=0)
    {
        rem=dividend%divisor;
        if(rem==0){
            gcd=divisor;
            return gcd;
        }
                dividend=divisor;
                divisor=rem;
    }
    return 1;
}
int main(){
    cout<<calcGCD(12,18);
    return 0;
}