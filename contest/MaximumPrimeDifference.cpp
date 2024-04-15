#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
        if(n==1) return 0;
        if(n==2) return 1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int s=-1, e=-1;
        for(int i=0;i<nums.size();i++){
            if(s==-1 && isPrime(nums[i])){
                s=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(isPrime(nums[i])) {
                e=i;
                break;
            }
        }
        if(e==-1 || s==-1) return 0;
        return e-s;
    }

int main(){
    vector<int> v{1,7};
    cout<<maximumPrimeDifference(v);

    return 0;
}