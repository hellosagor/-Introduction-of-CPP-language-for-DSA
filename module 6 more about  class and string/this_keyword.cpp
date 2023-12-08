#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    person(string name,int age)
    {
      this->name=name;
       this->age=age;
    }
    
};
int main()
{

     person sagor("sagor ahmed",24);
     cout<<sagor.name<<" "<<sagor.age<<endl;
    return 0;
}