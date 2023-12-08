#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    double cgpa;
    student(int r,int c,double g)
    {
        roll=r;
        cls=c;
        cgpa=g;
    }
};
int main()
{

    student rahim(30,9,5.00);
    student karim(20,40,3.55);
   cout<<rahim.roll <<" "<< rahim.cls << " "<<rahim.cgpa <<endl;
     cout<<karim.roll <<" "<< karim.cls << " "<<karim.cgpa <<endl;

    return 0;
}