#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=1,max=1;
        if(nums.size()==0){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
                count++;
                if(max<count){
                    max=count;
                }
            }
            else if(nums[i]-nums[i-1]==0){
                continue;
            }
            else{
                count=1;
            }
        }
        return max;
    }
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int ans=longestConsecutive(nums);
    cout<<ans;
    return 0;
}