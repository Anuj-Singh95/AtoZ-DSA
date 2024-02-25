#include <bits/stdc++.h>
using namespace std;
// vector<vector<int>> threeSum(vector<int> &nums)
// {
//     set <vector<int>> st;
    
//     for(int i=0;i<nums.size();i++){
//         set<int> s;
//         for(int j=i+1;j<nums.size();j++){
//             int x=0-nums[i]-nums[j];
//             if(s.find(x)!=s.end()){
//                 vector<int> a{nums[i],nums[j],x};
//                 sort(a.begin(),a.end());
//                 st.insert(a);
//             }
//                 s.insert(nums[j]);
            
//         }
//     }

//     vector<vector<int>> v(st.begin(), st.end());
//     return v;
// }


// vector<vector<int>> threeSum(vector<int> &nums)
// {
//     vector<vector<int>> v;
//     int x, y, z;
//     vector<int> temp{-1,-1,-1};
//     sort(nums.begin(), nums.end());
//     for (int i = 0; i < nums.size(); i++)
//     {
//         x = nums[i];
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             y = nums[j];
//             z = 0 - (nums[i] + nums[j]);
//             if (binary_search(nums.begin() + j + 1, nums.end(), z))
//             {   vector<int> a;
//                 a.push_back(x);
//                 a.push_back(y);
//                 a.push_back(z);
//                 if(a!=temp){
//                 v.push_back(a);
//                 temp=a;
//             }

//             }
//         }
//     }

//     return v;
    
// }

vector<vector<int>> threeSum(vector<int> &nums)
{
    set<vector<int>> v;
    int x, y, z;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        x = nums[i];
        for (int j = i + 1; j < nums.size(); j++)
        {
            y = nums[j];
            z = 0 - (nums[i] + nums[j]);
            if (binary_search(nums.begin() + j + 1, nums.end(), z))
            {
                vector<int> a{x,y,z};
                sort(a.begin(),a.end());
                v.insert(a);
            }
        }
    }
    vector<vector<int>> result(v.begin(), v.end());
    return result;
}

int main()
{
    vector<int> matrix{-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = threeSum(matrix);

    // for(int i=0;i<result.size();i++){
    //     for(int j=0;j<result[i].size();j++){
    //         cout<<result[i][j]<<" ";
    //     }
    // cout << endl;
    // }

    for (auto it = result.begin();
         it != result.end();
         it++)
    {

        for (int i = 0; i < (*it).size(); i++)
        {
            cout << (*it)[i] << " ";
        }
        cout << endl;
    }

    return 0;
}