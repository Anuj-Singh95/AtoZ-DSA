#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int x=0,y=0,max=0;
    long long sum=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        while (sum>k)
        {
            sum-=a[y];
            y++;
        }
        if(sum==k){
            if(max<(i-y+1)){
                max=i-y+1;
            }
        }
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    long long k;
    cin>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<longestSubarrayWithSumK(a,k);
    return 0;
}


