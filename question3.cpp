/*Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.*/
#include<iostream>
using namespace std;
class base
{ protected:
    float marks1,marks2,marks3;
       public:
       void input()
       { cout<<"enter marks of 3 subjects "<<endl;
         cin>>marks1>>marks2>>marks3;
       }
};
class derived :public base
{ protected:
    float sum;
       public:
       void total()
       {
         sum=marks1+marks2+marks3;
       }
};
class percentage:public derived
{  float result;
     public:
       void percent()
       {
          result=(sum/300.00)*100.00    ;
       }

       void showresult()
        {
          cout<<"percentage is "<<result<<endl;
        }
};
int main()
{ percentage p;
    p.input();
    p.total();
    p.percent();
    p.showresult();
 return 0;
}



