#include<bits/stdc++.h>
using namespace std;
int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        long long ta=0;
        int result=0;
        for(int i=0;i<apple.size();i++){
            ta+=apple[i];
        }
        sort(capacity.begin(), capacity.end(), greater<int>());
        int tb=0;
        for(int i=0;i<capacity.size();i++){
            if(tb<ta){
            tb+=capacity[i];
            result++;
            }else break;
        }
        return result;
    }
int main(){
    vector<int> apple {1,3,2};
    vector<int> capacity {4,3,1,5,2};

    cout<<minimumBoxes(apple, capacity);
    return 0;
}