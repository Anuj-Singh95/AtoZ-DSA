#include<bits/stdc++.h>
using namespace std;
int minEatingSpeed(vector<int>& piles, int h) {
        int l=1, r=INT_MAX, mid;
        int k,ans=INT_MAX;
        while(l<=r){
            mid=l+(r-l)/2;
            k=mid;
            int sum=0;
            for(int i=0;i<piles.size();i++){
                sum+=ceil((double)piles[i]/(double)k);
            }
            cout<<k<<" "<<sum<<endl;
            if(sum<=h){
                ans=min(ans, k);
                r=mid-1;
            }else{
                l=mid+1;
            }

        }
        return ans;
    }
int main(){
    vector<int> v{1000000000};
    cout<<minEatingSpeed(v, 2);
    return 0;
}