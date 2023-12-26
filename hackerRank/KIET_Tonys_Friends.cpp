#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k;
        cin>>k;
        sort(arr , arr+n);
        int sum=0;
        for(int i=0;i<k;i++){
			sum=sum+arr[i];
        }
        cout<<sum<<endl;
        
    }
    return 0;
}
