#include<bits/stdc++.h>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i=0,j=0;
    int n1=a.size();
    int n2=b.size();
    vector<int> v;
    while (i<n1 && j<n2){
        if(a[i]<b[j]){
            if(v.size()==0 || v.back()!=a[i]){
            v.push_back(a[i]);
            }
            i++;
        }else if(b[j]<a[i]){
            if(v.size()==0 || v.back()!=b[j]){
                v.push_back(b[j]);
            }
            j++;
        }else{
            if(v.size()==0 || v.back()!=a[i]){
                v.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    while (i<n1)
    {
        if(v.size()==0 || v.back()!=a[i]){
            v.push_back(a[i]);
        }
        i++;
    }
    while (j<n2)
    {
        if(v.size()==0 || v.back()!=b[j]){
            v.push_back(b[j]);
        }
        j++;
    }
    
    
    return v;
}
int main(){
    vector<int> a{1,2,3,3};
    vector<int> b{2,2,4};

    vector<int> c;

    c=sortedArray(a,b);

    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }

    return 0;
}