#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> v;
        int row = matrix.size();
        int col = matrix[0].size();
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                vector<int> v1;
                if (matrix[i][j] == 0) {
                    v1.push_back(i);
                    v1.push_back(j);
                    v.push_back(v1);
                }
            }
        }

        for (int i = 0; i < v.size(); i++) {
            int r=v[i][0];
            int c=v[i][1];
                for (int k = 0; k < col; k++) {
                    matrix[r][k] = 0;
                }
                for (int k = 0; k < row; k++) {
                    matrix[k][c] = 0;
                }
            
        }
    }
int main()
{
    // int n;
    // cin >> n;
    vector<vector<int>> nums={  
                                {0,1,2,0},
                                {3,4,5,2},
                                {1,3,1,5}
                            };
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> nums[i];
    // }
    setZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        for(int j=0;j<nums[i].size();j++){
        cout << nums[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}