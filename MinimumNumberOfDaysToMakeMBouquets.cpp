#include<bits/stdc++.h>
using namespace std;
int noOfBouquets(vector<int> &bloomDay, int day, int k){
    int m=0,count=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=day){
            count++;
        }else{
            m+=count/k;
            count=0;
        }
    }
    m+=count/k;
    count=0;
    return m;
}
int minDays(vector<int>& bloomDay, int m, int k) {
    if(bloomDay.size()<(double)m*k) return -1;
        int mn=0, mx=INT_MAX;
        // for(int i=0;i<bloomDay.size();i++){
        //     if(bloomDay[i]<mn){
        //         mn=bloomDay[i];
        //     }
        //     if(bloomDay[i]>mx){
        //         mx=bloomDay[i];
        //     }
        // }

        int l=mn, r=mx, mid;
        int ans=INT_MAX;
        while(l<=r){
            mid=l+(r-l)/2;
            int pm=noOfBouquets(bloomDay, mid, k);
            if(pm>=m){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
        
    }

int main(){
    vector<int> v{7,7,7,7,12,7,7};
    // cout<<noOfBouquets(v, 6, 3);
    cout<<minDays(v, 2,3);
    return 0;
}