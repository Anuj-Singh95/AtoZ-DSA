#include<bits/stdc++.h>
using namespace std;
int divisionResult(vector<int>& nums , int d ){
    int res=0;
    for(int i=0;i<nums.size();i++){
       res+=(int)ceil((double)nums[i]/(double)d);
    }
    return res;
}
int smallestDivisor(vector<int>& nums, int threshold) {
    int l=1, r=INT_MAX, mid,ans;
    while(l<=r){
        mid=l+(r-l)/2;
        if(divisionResult(nums,mid)<=threshold){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> v{21212,10101,12121};
    cout<<smallestDivisor(v, 1000000);
    return 0;
}