#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums) {
        int sum=0, max=nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>max){
                max=sum;
            }
            if(sum<=0){
                sum=0;
            }
            
        }
    return max;
    }
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<maxSubArray(a);
    return 0;
}


