#include <bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int top=0,right=col-1, bottom=row-1,left=0;
        vector<int> v;

        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
            v.push_back(matrix[top][i]);
        }
        top++;
        for(int j=top;j<=bottom;j++){
            v.push_back(matrix[j][right]);
        }
        right--;
        if(top<=bottom){
        for(int k=right;k>=left;k--){
            v.push_back(matrix[bottom][k]);
        }
        bottom--;
        }
        if(left<=right){
        for(int l=bottom;l>=top;l--){
            v.push_back(matrix[l][left]);
        }
        left++;
        }
        }

        
        return v;

    }


int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}