#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    int l = 0, r = nums.size() - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        // cout<<"l"<<l<<"r"<<r<<endl;
        // cout<<"mid"<<mid<<endl;
        if (mid > 0 && nums[mid - 1] == nums[mid] )
        {
            if((mid-1)%2){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        else if ((mid + 1) < nums.size()&&nums[mid] == nums[mid + 1] )
        {
            if((nums.size()-1-mid-1)%2){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        else
        {
            return nums[mid];
        }
    }
    return -1;
}

int main()
{
    vector<int> nums{1};
    cout<<singleNonDuplicate(nums);

    return 0;
}