#include <iostream>
#include <vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int sum = 0, count = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            if (sum == k) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> nums = {1, 1, 1}; // You can modify this vector as needed
    int k = 2; // And also change the target sum k

    int count = subarraySum(nums, k);
    cout << "Count of subarrays summing to " << k << " is: " << count << endl;

    return 0;
}
