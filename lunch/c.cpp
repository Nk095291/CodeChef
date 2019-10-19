#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n ,m;
        cin>>n >>m;
        vector<int>res(n*m);
        res[0]=n*m;
        int M=n*m;
        for(int k=1;k<n*m;k++)
        {
          
            int c=0;
            for(int i =0;i<n*m;i+=(k+1))
            {
                int i2 = i/m;
                int j2 = i%m;
                int no = j2*n +i2;
                if(no%(k+1)==0)
                    c++;
            }
            int q =((n*m-1)/(k+1)) +1; 
            res[k]=q + q-c;
            // cout<<k<<" "<<c<<endl;
        }

        for(int  i=0;i<n*m;i++)cout<<res[i]<<" \n"[i==n*m-1];
        

    }
}