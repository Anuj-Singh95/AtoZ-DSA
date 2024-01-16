#include <bits/stdc++.h>
using namespace std;
vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> v;
    v.push_back(a[a.size()-1]);
    int temp=a[a.size()-1];
    for(int i=a.size()-2;i>=0;i--){
        if(a[i]>temp){
            v.push_back(a[i]);
            // cout<<a[i]<<" ";
            temp=a[i];
        }
    }
    return v;
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

    vector <int> v=superiorElements(nums);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}