#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    double gpa;
    student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
int main()
{

    //  student rahim(326,10,4.98);
     student* karim=new student(326,10,4.98);
     cout << karim->roll << " " << karim->cls << " " << karim->gpa <<endl;
     
     
    return 0;
}