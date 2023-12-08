#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    bool JessicA=false;
    stringstream s(a);
    string word;
    while(s>>word)
    {
        if(word=="Jessica")
        {
            JessicA=true;
            break;
        }
    }
    if(JessicA)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
