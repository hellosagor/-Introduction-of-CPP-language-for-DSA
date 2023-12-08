#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

int main() 
{
   int n;
   cin>>n;
   while(n--)
    {
        int id[3],number[3];
        string nam[3],sakha[3];
        for(int i=0;i<3;i++)
        {
             cin>>id[i] >>nam[i] >>sakha[i] >> number[i];

        }
        int hight_mark=max(number[0],max(number[1],number[2]));
        for(int i=0;i<3;i++)
        {
            if(number[i]==hight_mark)
            {
                cout<<id[i] << " " <<nam[i] << " " <<sakha[i] <<" " <<number[i] <<endl;
                break;
            }
        }
    }
    return 0;
}
