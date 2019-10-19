#include<bits/stdc++.h>
using namespace std;
int main()
{
       freopen("input.txt","r",stdin);
    //  freopen("output.txt","w",stdout);
    int t;
    cin>> t;
    while (t--)
    {
        int n,x;
        cin>>n;
        vector<int> ar(n);
        for(int i=0;i<ar.size();i++)
            cin>>ar[i];
        cin>>x;
        int a =0;
        int b=ar.size()-1;
        int pre =0;
        bool flag =false;
        while(a<b)
        {
            int ac = ar[b--]*x +pre;
            while (a<b&&ac>=ar[a])
            {
               
                    a++;
                if(a==b&&n-b+1>a)
                {
                    flag = 1;
                }
                ac-=ar[a-1];
            }
            pre= ac;
            // cout<<a<<" "<<b<<" "<<pre<<endl;
        }    
 
        
        if(flag)
        a--;
        cout<<a+1<<" "<<n-a-1<<endl;
    }
    
}