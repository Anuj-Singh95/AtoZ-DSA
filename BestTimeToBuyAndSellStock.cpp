#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int buy=0,sell=0,maxProfit=0;

        for(int i=0;i<prices.size();i++){
            if(prices[i]<prices[buy]){
                buy=i;
            }
            if(prices[i]>prices[sell]){
                sell=i;
            }
            if(sell<buy){
                sell=buy;
            }
            if(prices[sell]-prices[buy]>maxProfit){
                maxProfit=prices[sell]-prices[buy];
            }
        }
        return maxProfit;
    }
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<maxProfit(a);
    return 0;
}


