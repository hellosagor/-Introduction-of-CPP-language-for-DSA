#include<bits/stdc++.h>
using namespace std;
namespace rakib
{
    int age=23;
    void hello()
    {
        cout<<"rakib space"<<endl;
    }
}
namespace sakib
{
    int age2=23;
    void hello2()
    {
        cout<<"sakib space"<<endl;
    }
}
using namespace rakib;
int main()
{

    cout<<age<<endl;
    hello();
    return 0;
}