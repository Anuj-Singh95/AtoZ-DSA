#include<bits/stdc++.h>
using namespace std;
bool isSubstringPresent(string s) {
        for(int i=0;i<s.size()-1;i++){
            string ss="";
            ss.push_back(s[i]);
            ss.push_back(s[i+1]);
            // cout<<ss<<endl;
            for(int j=s.size()-1;j>0;j--){
                int flag=1;
                for(int k=0;k<ss.size();k++){
                    // cout<<ss[k]<<" "<<s[j-k]<<endl;
                    if(ss[k]!=s[j-k]){
                        flag=0;
                    }
                }
                if(flag==1){
                    return true;
                }
            }
        }
        return false;
    }
int main(){
    string s="leetcode";
    cout<<isSubstringPresent(s);

    return 0;
}