#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=3;
    for(int i=1;i<=n;i++){
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<".";
        }
        //star
        for(int k=0;k<2*i-1;k++){
            cout<<"*";
        }
        //space
        for(int l=0;l<=n-i-1;l++){
            cout<<".";
        }
        cout<<endl;
    }

    return 0;
}