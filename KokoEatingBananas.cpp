#include <bits/stdc++.h>
using namespace std;
int minEatingSpeed(vector<int> &piles, int h)
{
    int l = 1, r = INT_MAX, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        cout << mid;
        int sum = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            int temp;
            // if ((piles[i] % mid) > 0 && piles[i] > mid)
            // {
            //     temp = piles[i] / mid + 1;
            // }
            // else
            // {
            //     temp = piles[i] / mid;
            //     if (temp == 0)
            //     {
            //         temp = 1;
            //     }
            // }
            temp=ceil((double)piles[i]/(double)mid);
            cout << "temp" << temp << " ";
            sum += temp;
        }
        cout << "sum" << sum << " " << endl;

         if (sum <= h)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums{30,11,23,4,20};
    cout << "ans" << minEatingSpeed(nums, 5);
    return 0;
}