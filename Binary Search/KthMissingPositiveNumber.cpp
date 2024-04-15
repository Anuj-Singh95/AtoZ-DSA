#include<bits/stdc++.h>
using namespace std;
int findKthPositive(vector<int>& arr, int k) {
        int m=1;
        vector<int> v;
        for(int i=0;i<arr.size();i++){
            while(m<arr[i]){
                v.push_back(m);
                m++;
            }
            m++;

        }
        // cout<<endl;
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        return v[k-1];
    }
int main(){
    vector<int> v{2,3,4,7,11};
    cout<<findKthPositive(v, 5);
    return 0;
}