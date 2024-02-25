#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        map<int, int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> v;
        for(auto &pr:m){
            if(pr.second>(nums.size()/3)){
                v.push_back(pr.first);
            }
        }
        return v;
    }


int main() {
    vector<int> v{3,2,3};
    vector<int> result = majorityElement(v);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;
}
