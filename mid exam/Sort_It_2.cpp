#include<bits/stdc++.h>
using namespace std;
int*sort_it(int n,int a[])
   {
    sort(a,a+n,greater<int>());
    return a;
   }  
int main()
{

   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int* sort_ary=sort_it(n,a);
   for(int i=0;i<n;i++)
   {
    cout << sort_ary[i]<<" ";
   }
    return 0;
}