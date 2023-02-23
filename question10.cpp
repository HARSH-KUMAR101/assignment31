/*Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base classes.
Write necessary member functions.*/

#include<iostream>
using namespace std;
class worker
{ protected:
    int code;
  char name[20];
  float salary;
   public:
      void setdata()
      { cout<<"\nEnter code   : ";
        cin>>code;
        cout<<"\nEnter name   : ";
        cin>>name;
        cout<<"\nEnter salary : ";
        cin>>salary;
      }
      void showdata()
      {
        cout<<"\ncode   : "<<code;
        cout<<"\nName   : "<<name;
        cout<<"\nSalary : "<<salary;
      }
};
class officer
{ protected:
    float DA,HRA;
    public:
       void setofficer()
       { cout<<"\nEnter DA  : ";
         cin>>DA;
         cout<<"\nEnter HRA : ";
         cin>>HRA;
       }
       void showofficer()
       {
         cout<<"\nDA  : "<<DA;
         cout<<"\nHRA : "<<HRA;
       }
};
class manager : public officer,public worker
{private:
     float TA=0,gross_salary=0;
   public:
      void cal()
      {
       TA=(salary*10.00)/100.00;
       gross_salary=salary+DA+HRA+TA;
      }
       void show_TA()
       {
         cout<<"\nTA : "<<TA;
         cout<<"\nGross salary : "<<gross_salary<<endl;
       }
};
int main()
{ int cnt;
    cout<<"\nEnter Manager count : ";
    cin>>cnt;
   manager m[cnt];
       for(int i=0;i<cnt;i++)
       { cout<<"\nEnter worker information for "<<i+1;
         cout<<"\n-----------------------------";
          m[i].setdata();
          m[i].setofficer();
          m[i].cal();

            cout<<"\n---------------------------";
            cout<<"\nMANGER INFORMATION";
            cout<<"\n---------------------------";
          m[i].showdata();
          m[i].showofficer();
          m[i].show_TA();
       }
 return 0;
}
