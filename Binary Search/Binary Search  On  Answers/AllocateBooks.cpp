#include<bits/stdc++.h>
using namespace std;
int possibleNoOfStud(vector<int> & arr, int p){
    int stud=1, load=0;
    // cout<<p<<endl;
    for(int i=0;i<arr.size();i++){
        // cout<<load<<" "<<arr[i]<<endl;
        if(load+ arr[i]>p){
            load=arr[i];
            stud++;
        }
        else{
            load+=arr[i];
        }
    }
    // cout<<endl;
    return stud;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(n<m) return -1;
    int start=*max_element(arr.begin(), arr.end());
    int end=accumulate(arr.begin(), arr.end(), 0);
    int ans, mid;
    // cout<<start<<" "<<end;
    while(start<=end){
        mid=start+(end-start)/2;
        int pnos= possibleNoOfStud(arr, mid);
        if(pnos==m){
            ans=mid;
        }
        if(pnos<=m){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    
    return ans;
}
int main(){
    vector<int> v{25 ,46 ,28, 49, 24};
    cout<<findPages(v, 5, 4);
    return 0;
}