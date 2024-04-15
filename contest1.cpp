#include<bits/stdc++.h>
using namespace std;
    int longestMonotonicSubarray(vector<int>& nums) {
        int mxinc=1, mxdec=1;
        int inc=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                inc++;
            }else{
                mxinc=max(inc,mxinc);
                inc=1;
            }
        }
        mxinc=max(inc,mxinc);
        int dec=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                // cout<<nums[i]<<" "<<nums[i+1]<<endl;
                dec++;
            }else{
                mxdec=max(dec,mxdec);
                dec=1;
            }
        }
        mxdec=max(dec,mxdec);
        if(mxinc>mxdec){
            return mxinc;
        }else{
            return mxdec;
        }
    }
int main(){
    vector<int> v{3,2,1};
    cout<<longestMonotonicSubarray(v);
    return 0;
}