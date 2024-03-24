#include<bits/stdc++.h>  
    using namespace std;  
      

      int maximumLengthSubstring(string s) {
        if(s.length()<=2) return s.length();
        int mx=2;
    
        for(int i=0;i<s.size();i++){
            map<char, int> mp;
            for(int j=i;j<s.size();j++){
                mp[s[j]]++;
                if(mp[s[j]]>2) break;
                mx=max(mx,j-i+1);
            }
        }
        return mx;
    }
    int main(){  
        cout<<maximumLengthSubstring("bcbbbcba");

        return 0;  
    }  