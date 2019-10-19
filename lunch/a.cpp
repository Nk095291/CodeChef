#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>ch(3);
        vector<int>cost(3);
        for(int i=0;i<3;i++)
            cin>>ch[i];
        for(int i=0;i<3;i++)
            cin>>cost[i];
        bool flag  = true;
        for(int i=0;i<3;i++)
        {
            for(int j=i+1;j<3;j++)
            {
                if(ch[i]==ch[j]&&cost[i]!=cost[j])
                    {
                        flag = false;
                    }
                else if(ch[i]<ch[j]&&cost[i]>=cost[j])
                {
                    flag = false;
                }
                 else if(ch[i]>ch[j]&&cost[i]<=cost[j])
                {
                    flag = false;
                }
            }
        }
        if(flag)
        {
         cout<<"FAIR\n";   
        }else
        {
            cout<<"NOT FAIR\n";
        }
        
                   
    }
}
