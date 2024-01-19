#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = i; j < matrix[i].size(); j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    
    for (int i=0;i<matrix.size();i++){
        for(int j=0;j<(matrix[i].size())/2;j++){
            //swap(matrix[i][j] , matrix[i][matrix[i].size()-j])
            int temp = matrix[i][j];
            matrix[i][j]=matrix[i][(matrix[i].size())-j-1];
            matrix[i][(matrix[i].size())-j-1]=temp;
        }
    }

}

int main()
{
    vector<vector<int>> v;

    v.push_back({1, 2, 3});
    v.push_back({5, 6, 7});
    v.push_back({9, 10, 11});

    rotate(v);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            printf("%d\t", v[i][j]);
        }
        printf("\n");
    }
}