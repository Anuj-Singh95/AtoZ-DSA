#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v={{1}};
        for(int i=0;i<numRows-1;i++){
                vector<int> temp;
                temp.push_back(v[i][0]);
            for(int j=0;j<i;j++){
                int sum = v[i][j]+v[i][j+1];
                temp.push_back(sum);
            }   
                temp.push_back(v[i][v[i].size()-1]);
                v.push_back(temp);
        }
        return v;
    }


int main() {
    vector<vector<int>> result = generate(5);

    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
