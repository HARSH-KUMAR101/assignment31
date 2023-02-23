/*Write a C++ program to design a base class Person (name, address, phone_no). Derive
a class Employee (eno, ename) from Person. Derive a class Manager (designation,
department name, basic-salary) from Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary*/
#include<iostream>
using namespace std;
class person
{protected:
     char name[20],address[20];
     long long ph_no;
};
class employee : public person
{ public:
    int eno;
  char ename[20];
};
class manager:public employee
{ public:
    char designation[20],deptname[20];
  long long basesalary;
    void accept_details()
    {
        cout<<"\nEnter details of manager "<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"Enter employee number: ";
        cin>>eno;
        cout<<"\nEnter name : ";
        cin>>ename;
        cout<<"\nEnter address : ";
        cin>>address;
        cout<<"\nEnter Phone number : ";
        cin>>ph_no;
        cout<<"\nEnter Designation : ";
        cin>>designation;
        cout<<"\nEnter Department name : ";
        cin>>deptname;
        cout<<"\nEnter basic salary : ";
        cin>>basesalary;
    }
};
int main()
{ int i,cnt,temp;
  manager man[10];
        cout<<"\nHOW MANY MANGER YOU WANT TO ENTER : ";
        cin>>cnt;
       for(i=0;i<cnt;i++)
       {
           man[i].accept_details();
       }
       temp=0;
       for(i=1;i<cnt;i++)
       { if(man[temp].basesalary<man[i].basesalary)
           temp=i;
       }
       cout<<"\nManager with Highest Salary is : "<<man[temp].basesalary<<" and name is "<<man[temp].ename<<endl;
return 0;
}



