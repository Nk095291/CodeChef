#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        unordered_map<int,int>map;
        cin>>n;
        vector<int> ar(n);
        for(int i =0;i<n;i++)
            cin>>ar[i];
            vector<int>temp(n);
            int k=0;
        for(int x:ar)
            temp[k++]=x;
        sort(ar.begin(),ar.end());
        for(int i =0;i<ar.size();i++)
        {
            auto t =upper_bound(ar.begin(),ar.end(),ar[i]);
            map[ar[i]]=ar.size();
            map[ar[i]]-=t-ar.begin();
        }
        for(auto x:temp)
            cout<<map[x]<<" ";
        cout<<endl;
        
    }
}