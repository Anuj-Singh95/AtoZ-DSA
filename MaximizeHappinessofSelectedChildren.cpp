#include<bits/stdc++.h>
using namespace std;
long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long result=0;
        for(int i=0;i<k;i++){
            if(happiness[i]-i > 0){
                result+=happiness[i]-i;
            }else{
                break;
            }
        }
        return result;
    }
int main(){
    vector<int> happiness {4,3,1,5,2};

    cout<<maximumHappinessSum(happiness, 2);
    return 0;
}