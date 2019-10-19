#include<bits/stdc++.h>
using namespace std;
void update(int &a,int k)
{
    if(a>k)
    {
        a--;
    }else if(a<k)
    {
        a++;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,k,l ,r;
        cin>>n>>q>>k>>l>>r;
        vector<int>c(n);
        vector<int>p(n);
        for(int i =0;i<n;i++)
        {
            cin>>c[i];
            cin>>p[i];
        }
        // for(auto x:p)
        // cout<<x<<" ";
        // cout<<endl;
        // for(auto x:c)
        // cout<<x<<" ";
        // cout<<endl;
        vector<int>res(q);
      
        for(int i =0;i<q;i++)
        {
            int minn =INT_MAX;
            for(int j =0;j<c.size();j++)
            {
                update(c[j],k);
                if(c[j]>=l&&c[j]<=r)
                {
                    minn=min(minn,p[j]); 
                }
            }
            if(minn==INT_MAX)
                res[i]=-1;
            else 
            res[i]=minn;
        }
         for (int i = 0; i < q; i++)
                cout << res[i] << " \n"[i == q - 1];
    }
}