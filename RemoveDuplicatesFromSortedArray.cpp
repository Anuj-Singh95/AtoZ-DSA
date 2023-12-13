#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int l=0;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[l]){
			l++;
			arr[l]=arr[i];
            cout<<arr[l]<<" ";
		}
	}
    cout<<endl;
    cout<<l+1<<endl;
	return l;
}
void rotate(int* nums, int numsSize, int k) {
    for(int i=0;i<numsSize/2;i++){
        int temp = nums[i];
        nums[i]=nums[numsSize-i-1];
        nums[numsSize-i-1]=temp;
    }
    
    for(int i=0;i<k/2;i++){
    int temp = nums[i];
        nums[i]=nums[k-i-1];
        nums[k-i-1]=temp;
    }
    int x=0;
for(int i=k;i<((numsSize-k)/2)+k;i++){
        int temp = nums[i];
        nums[i]=nums[numsSize-1-x];
        nums[numsSize-1-x]=temp;
        x++;
    }
}
int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9};
    // removeDuplicates(arr, 10);
    rotate(arr, 9, 3);

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" "; 
    }

    return 0;
}
