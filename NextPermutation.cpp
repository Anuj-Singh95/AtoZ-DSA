#include <bits/stdc++.h>
using namespace std;
void nextPermutationn(vector<int> &nums)
{
    int b = -1;
    for (int i = nums.size() - 1; i > 0; i--)
    {
        if (nums[i - 1] < nums[i])
        {
            b = i - 1;
            break;
        }
    }
    if (b == -1)
    {
        sort(nums.begin(), nums.end());
    }
    else
    {
        int idx = b + 1;
        for (int i = b + 1; i < nums.size(); i++)
        {
            if (nums[i] < nums[idx] && nums[i] > nums[b])
            {
                idx = i;
            }
        }
        int temp = nums[b];
        nums[b] = nums[idx];
        nums[idx] = temp;
        sort(nums.begin() + b + 1, nums.end());
    }
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
    nextPermutationn(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}