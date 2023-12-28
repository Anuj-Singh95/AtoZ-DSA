#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pNums;
        vector<int> nNums;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nNums.push_back(nums[i]);
            }
            else{
                pNums.push_back(nums[i]);
            }
        }

        int p=0,n=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                v.push_back(pNums[p]);
                p++;
            }else{
                v.push_back(nNums[n]);
                n++;
            }
        }

        return v;
    }
int main(){
    int n;
    cin>>n;
    vector<int> nums(n), a(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    a=rearrangeArray(nums);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}


