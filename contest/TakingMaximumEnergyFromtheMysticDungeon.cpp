#include<bits/stdc++.h>
using namespace std;
int maximumEnergy(vector<int>& energy, int k) {
        int result=INT_MIN;
        for(int i=(energy.size()-1);i>(energy.size()-k)-1;i--){
            int sum =0;
            for(int j=i;j>=0;j-=k){
                sum+=energy[j];
                result=max(sum,result);
            }
        }

        //     cout<<energy.size()-1<<" "<<energy.size()-1-k<<endl;
        // for(int i=2;i>=0;i--){
        // }
        return result;
    }

int main(){
    vector<int> v{-2,-3,-1};
    cout<<maximumEnergy(v,2);

    return 0;
}