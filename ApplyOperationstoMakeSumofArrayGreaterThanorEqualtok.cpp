#include<bits/stdc++.h>
using namespace std;

    int minOperations(int k) {
        if(k<=1){
            return 0;
        }
        int mn=INT_MAX;
        for(int i=1;i<k;i++){
            if(k<=i+1)
            mn=min(mn, i);
            if(k<=(i+1)*ceil(float(k)/float(i+1))){
                int temp=i+ceil(float(k)/float(i+1));
            mn=min(mn, temp-1);
            }
        }
        return mn;
    }
int main(){
    cout<<ceil(float(7)/float(3))<<endl;
    cout<<minOperations(11);

    return 0;
}