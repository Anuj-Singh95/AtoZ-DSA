#include<bits/stdc++.h>
using namespace std;
int minimumCardPickup(vector<int>& cards) {
        map<int, int> mp;
                int ans=-1;
        for(int i=0;i<cards.size();i++){
            if((mp.find(cards[i])) == mp.end()){
                mp[cards[i]]=i;
            }else{
                if(ans==-1){
                    ans=(i-mp[cards[i]]+1);
                }else{
                    ans=min(ans, (i-mp[cards[i]]+1));
                }
                mp[cards[i]]=i;
            }
        }
        return ans;
    }
int main(){
    vector<int> cards={3,4,2,3,4,7};
    cout<<minimumCardPickup(cards);

}