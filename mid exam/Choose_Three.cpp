#include<bits/stdc++.h>
using namespace std;
int main()
{

    int p;
    cin>>p;
    while(p--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int jodipai=0;
        for(int i=0;i<n-2 &&!jodipai;i++)
        {
            for(int j=i+1;j<n-1 &&!jodipai;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if (a[i]+a[j]+a[k]==m)
                    {
                        jodipai=1;
                        break;
                    }
                }
            }
        }
        if(jodipai)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
     
    return 0;
}