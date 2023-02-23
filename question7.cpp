/*Write class declarations and member function definitions for a C++ base class to
represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and Parttime (number
of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code.*/

#include<iostream>
using namespace std;
class employee
{ public:
    int emp_number;
   char empname[20];
       void set()
       {
          cout<<"\nEnter employee no. : ";
          cin>>emp_number;
          cout<<"\nEnter employee name : ";
          cin>>empname;
       }
};
class fulltime:public employee
{ public:
    float daily_rate;
    int days;
    int salary;
       void setdata()
       {
          cout<<"\nEnter daily rate : ";
          cin>>daily_rate;
          cout<<"\nEnter number of days : ";
          cin>>days;
       }
        void cal()
        {
            salary=daily_rate*days;
            cout<<"salary : "<<salary;
        }
        void show()
        {
           cout<<"\n-----------------------\n";
           cout<<"\nEmployee Number : "<<emp_number;
           cout<<"\nEmployee Name : "<<empname;
           cout<<"\nSalary : "<<salary;
           cout<<"\nStatus : Fulltime";
           cout<<"\n-----------------------\n";
        }

};
class parttime:public employee
{ public:
    int working_hour;
    int hourly_rate,salary1;
        void set1()
       {
          cout<<"\Enter hourly rate : ";
          cin>>hourly_rate;
          cout<<"\nEnter working hour : ";
          cin>>working_hour;
       }
        void call()
        {
            salary1=hourly_rate*working_hour;
            cout<<"salary : "<<salary1;
        }
        void show1()
        {
           cout<<"\n-----------------------\n";
           cout<<"\nEmployee Number : "<<emp_number;
           cout<<"\nEmployee Name : "<<empname;
           cout<<"\nSalary : "<<salary1;
           cout<<"\nStatus : Parttime";
           cout<<"\n-----------------------\n";
        }

};
int main()
{ int var=0;
  int var1=0;
   fulltime f1[5];
   parttime p1[5];
  int x,i;
     do
     {  cout<<"\n";
        cout<<"\n 1.Enter record ";
        cout<<"\n 2.Display record ";
        cout<<"\n 3.Search record ";
        cout<<"\n 4.Quit";
        cout<<"\n\n Enter Your Choice : ";
        cin>>x;

           switch(x)
           {
             case 1:
                 int y;
                 cout<<"\n1.Fulltime Employee";
                 cout<<"\n2.Parttime Employee\n";
                 cout<<"\n Enter : ";
                 cin>>y;
                 switch(y)
                 {
                    case 1:
                        f1[var].set();
                        f1[var].setdata();
                        f1[var].cal();
                        var++;
                         break;
                    case 2:
                        p1[var1].set();
                        p1[var1].set1();
                        p1[var1].call();
                        var1++;
                        break;
                 }
                 break;

             case 2:
                   for(i=0;i<var;i++)
                   {
                      f1[i].show();
                   }
                   for(i=0;i<var1;i++)
                   {
                      p1[i].show1();
                   }
                 break;
             case 3:
                int a;
                cout<<"\nEnter Employee No. : ";
                cin>>a;
                  for(int i=0;i<var;i++)
                  { if(f1[i].emp_number==a)
                      f1[i].show();
                  }
                   for(int i=0;i<var1;i++)
                  {
                     if(p1[i].emp_number==a)
                      p1[i].show1();
                  }
           }
     } while(x!=4);
 return 0;
}
