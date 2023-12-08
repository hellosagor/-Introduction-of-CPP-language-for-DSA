#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
    //  sort(a,a+n);//ascending oder sorting
    sort(a,a+n,greater<int>());//descendig order sorting
     for(int i=0;i<n;i++)
     {
        cout<<a[i]<<" ";
     }hgh
     
     return 0;
        
}