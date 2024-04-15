#include<bits/stdc++.h>
using namespace std;
int isPossibleAtGivePos(vector<int> &stalls, int k, int p){
    int c=0;
    k--;
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-stalls[c]>=p){
            c=i;
            k--;
        }
    }
    if(k>0){
        return 0;
    }else return 1;
}
int main(){
    vector<int> v{0, 3, 4, 7, 9, 10};
    cout<<isPossibleAtGivePos(v, 4, 4);
    return 0;
}