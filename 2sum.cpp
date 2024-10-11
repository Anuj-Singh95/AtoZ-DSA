#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;    
        }
        // for (auto itr =mp.begin(); itr != mp.end(); itr++) {
        // cout << itr->first << '\t' << itr->second << '\n';
        // }
        // cout<<endl;

        for(int i=0;i<nums.size();i++){
            // if(nums[i]>target) continue;
            cout<<i<<endl;
            if(mp.find(target-nums[i])!=mp.end()){
                auto it= mp.find(target-nums[i]);
                v.push_back(i);
                v.push_back(it->second);
                break;
            }
        }
        return v;
    }
int main(){
    vector<int> v{2,7,11,15};
    vector<int> res = twoSum(v,9);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}