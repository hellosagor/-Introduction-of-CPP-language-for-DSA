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
    
     person* sagor=new person("sagor hasan",24);
     person* sakib=new person("sakib mia",25);
    // sagor->name=sakib->name;
    // sagor->age=sakib->age;
     *sagor=*sakib;
    delete sakib;
     cout<<sagor->name<<" "<<sagor->age<<endl;

    return 0;
}