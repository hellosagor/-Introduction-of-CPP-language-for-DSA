#include <iostream>

using namespace std;

class chelepele {
    public:
    string nam;int cls;char sec;int id;int m_mrk;int en_mrk;int t_mrk;
};

int main()
 {
    int n;
    cin>>n;

    chelepele student[n];
    for (int i=0;i<n;++i)
     {
        cin>>student[i].nam>>student[i].cls>> student[i].sec
            >> student[i].id>>student[i].m_mrk>>student[i].en_mrk;
        
        student[i].t_mrk=student[i].m_mrk+student[i].en_mrk;
    }

   for (int i=0;i<n-1;++i)
    {
    for (int j=0;j<n-i-1;++j)
     {
        if (student[j].t_mrk<student[j + 1].t_mrk ||
            (student[j].t_mrk==student[j+1].t_mrk&&student[j].id>student[j+1].id))
         {
            swap(student[j],student[j+1]);
        }
    }
}


    for (int i=0;i<n;++i) {
        cout<<student[i].nam<<" "<<student[i].cls<< " " <<student[i].sec<< " "
         << student[i].id<<" " <<student[i].m_mrk<< " "<<student[i].en_mrk<<endl;
    }

    return 0;
}
