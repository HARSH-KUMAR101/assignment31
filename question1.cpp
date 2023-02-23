/*Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.*/

#include<iostream>
using namespace std;
class person
{ char name[20];
  int age;
public:
     setName()
     { cout<<"Enter employee name : ";
       gets(name);
     }
     setAge()
     { cout<<"Enter employee age : ";
       cin>>age;
     }
      getName()
      { cout<<"Employee name : "<<name<<endl;
      }
      getAge()
      {
        cout<<"Employee age : "<<age<<endl;
      }

};
class Employee : public person
{ int id,salary;
public:
    setId()
    { cout<<"Enter Employee id : ";
      cin>>id;
    }
    setSalary()
    { cout<<"Enter Employee salary : ";
      cin>>salary;
    }
    getId()
    {
      cout<<"Employee id = "<<id<<endl;
    }
    getSalary()
    {
        cout<<"Employee salary = "<<salary<<endl;
    }
};
int main()
{ Employee E1;
    E1.setName();
    E1.setAge();
    E1.setId();
    E1.setSalary();
       cout<<"\n....given employee data ....";
    E1.getName();
    E1.getAge();
    E1.getId();
    E1.getSalary();
 return 0;
}
