#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double m;
    vector<int> v;
    for(int i = 0; i < nums1.size(); i++){
        v.push_back(nums1[i]);
    }
    for(int i = 0; i < nums2.size(); i++){
        v.push_back(nums2[i]);
    }
    sort(v.begin(), v.end());
    int n = v.size();
    if(n % 2){
        m = v[n / 2];
    } else {
        m = v[n / 2 - 1] + v[n / 2];
        m = m / 2.0;
    }
    return m;
}

int main() {
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2,4};

    double median = findMedianSortedArrays(nums1, nums2);
    cout << "The median of the two sorted arrays is: " << median << endl;
    
    return 0;
}
