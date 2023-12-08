#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    int mark1;
     int mark2;
    person(string nm,int ag,int m1,int m2)
    {
        name=nm;
        age=ag;
        mark1=m1;
        mark2=m2;

    }
    int tottal_marks()
    {
        return mark1+mark2;
    }
};
int main()
{

     person sagor("Sagor ahmed",24,96,99);
     cout<<sagor.tottal_marks()<<endl;

    return 0;
}