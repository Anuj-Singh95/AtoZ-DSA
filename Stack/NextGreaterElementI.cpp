#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        for(int i=0;i<nums1.size();i++){
            int idx=-1;
            int flag=0;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    idx=j;
                }
                if(idx!=-1 && nums2[idx]<nums2[j]){
                    flag=1;
                    nums.push_back(nums2[j]);
                    break;
                }
            }
            if(!flag){
                nums.push_back(-1);
            }
        }
        return nums;
    }

int main(){
    vector<int> v1 = {4,1,2};
    vector<int> v2 = {1,3,4,2};
    vector<int> v ;
    v=nextGreaterElement(v1,v2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}