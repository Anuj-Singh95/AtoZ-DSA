#include<bits/stdc++.h>
using namespace std;
int shippingDays(vector<int>& weights , int cap){
        int day=1, load=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load>cap){
                day++;
                load=weights[i];
            }else{
                load+=weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int mx=0, sum=0;
        for(int i=0;i<weights.size();i++){
            mx=max(mx, weights[i]);
            sum+=weights[i];
        }
        int l=mx, r=sum, mid, ans;
        while(l<=r){
            mid=l+(r-l)/2;
            int sd=shippingDays(weights,mid);
            if(sd<=days && sd!=-1){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
int main(){
    vector<int> v{3,2,2,4,1,4};
    cout<<shipWithinDays(v, 3);
    return 0;
}