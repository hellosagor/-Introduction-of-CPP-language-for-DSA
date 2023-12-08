#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >>n;
    for (int i=0;i<n;i++) 
    {
        string s,t;
        cin >>s>>t;
        int number = 0;
        while (number!=-1) 
        {
            number=s.find(t);
            if (number!=-1)
           {
                s.replace(number,t.size(),"#");
                number++;
            }
        }
        cout <<s<< endl;
    }

    return 0;
}
