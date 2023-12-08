#include <iostream>
#include <algorithm>

using namespace std;

class chelepele
{
    public:
  string nam;
  int cls;
  char sec;
  int id;
  int math;
  int eng;
};

int markcount(int math, int eng) 
{
  return math+eng;
}
bool chelepelermarks(chelepele chelepele1, chelepele chelepele2) 
{
  if (chelepele1.eng>chelepele2.eng) 
  {
    return true;
  } else if (chelepele1.eng==chelepele2.eng)
   {
    if (chelepele1.math>chelepele2.math) 
    {
      return true;
    } else if (chelepele1.math==chelepele2.math) 
    {
      if (chelepele1.id<chelepele2.id) 
      {
        return true;
      } else
       {
        return false;
      }
    } else 
    {
      return false;
    }
  } else
   {
    return false;
  }
}

int main() 
{
  int a;
  cin >> a;
 chelepele stdn[a];
  for (int i=0;i<a;i++) 
  {
    cin>>stdn[i].nam>>stdn[i].cls>>stdn[i].sec>>stdn[i].id>>stdn[i].math>>stdn[i].eng;
  }
  sort(stdn,stdn+a,chelepelermarks);
  for (int i=0;i<a;i++)
   {
    cout<<stdn[i].nam<< " "<<stdn[i].cls<< " "<<stdn[i].sec<<" "<<stdn[i].id<< " " <<stdn[i].math<<" "<<stdn[i].eng<<endl;
  }

  return 0;
}
