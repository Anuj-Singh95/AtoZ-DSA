#include <bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int>& nums) {

        if (nums.size() == 1)
            return 0;
            if ((nums[0] > nums[1])) {
                return 0;
            }
            if ( nums[nums.size()-1] > nums[nums.size()-2]) {
                return nums.size()-1;
            }
        
        int l = 1, r = nums.size() - 2, mid;
        while (l <= r) {
            mid = (l + r) / 2;

            if ((nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])) {
                return mid;
            } else if (nums[mid] > nums[mid - 1]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return -1;
    }
int main()
{
    vector<int> nums{2, 1};
    cout << findPeakElement(nums);

    return 0;
}