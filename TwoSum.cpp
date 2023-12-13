#include<bits/stdc++.h>
using namespace std;
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int * sum;
    sum = (int*)malloc(2 * sizeof(int));
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                sum[0]=i;
                sum[1]=j;
                return sum;
            }
        }
    }
    return sum;
}
int main(){
    int arr[]={2,7,11,15};

    return 0;
}