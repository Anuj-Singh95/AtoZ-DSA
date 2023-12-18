#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        int count=1,max=0,idx;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) {
                count++;
            };
                if(count>max){
                max=count;
                idx=i;
                cout<<i<<" "<<max<<endl;
                }
                if(nums[i]!=nums[i+1])
                count=1;
            
        }
        return nums[idx];
    }
int main(){
    vector<int> v={2,2,1,1,1,2,2};

    cout<<majorityElement(v);
    return 0;
}