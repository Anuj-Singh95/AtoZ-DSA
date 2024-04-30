#include<bits/stdc++.h>
using namespace std;
int numberOfSpecialChars(string word) {
        set<char> s;
        for(int i=0;i<word.size();i++){
            s.insert(word[i]);
        }

        string str;
        for(auto it=s.begin();it!=s.end();it++){
            // cout<<*it<<" ";
            str.push_back(*it);
        }
        // cout<<endl;
        int count=0;
        for(int i=0;i<str.size()-1;i++){
            for(int j=i+1;j<str.size();j++){
                // cout<<str[i]<<" "<<str[j]<<endl;
                if(str[i]-str[j]==32 || str[j]-str[i]==32){
                    count++;
                }
            }
        }
        return count;
    }

int main(){
    string s="aaAbcBC";
    cout<<numberOfSpecialChars(s);

    return 0;
}