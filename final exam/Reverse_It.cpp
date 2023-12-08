#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n;
     cin>>n;
     string nam[n];
     int cls[n],id[n];
     char sec[n];
     for(int i=0;i<n;i++)
     {
        cin>>nam[i]>>cls[i]>>sec[i]>>id[i];
     }
     int tmp;
     for(int i=0;i<n/2;i++)
    {
        tmp=sec[i];
        sec[i]=sec[n-1-i];
        sec[n-1-i]=tmp;
    }
    for(int i=0;i<n;i++)
   cout<<nam[i]<<" " <<cls[i]<<" "<<sec <<" "<<id[i] <<endl;


    return 0;
}