#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq1; //max heap
    priority_queue<int, vector<int>, greater<int>> pq2; //min heap

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(i%2==0){
            pq1.push(arr[i]);
        }else{
            pq2.push(arr[i]);
        }

        if(pq1.size()==pq2.size()){
            cout<<(pq1.top()+pq2.top())/2<<endl;
        }else{
            cout<<pq1.top()<<endl;
        }
    }

    return 0;


}