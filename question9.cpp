/*Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.*/
#include<iostream>
using namespace std;
class student
{ int id;
  char name[20];
public:
    void setdata()
    {
       cout<<"\nEnter roll no. : ";
       cin>>id;
       cout<<"\nEnter student name : ";
       cin>>name;
       cout<<"\n";
    }
      void showdata()
      {
         cout<<"\nRoll no. : "<<id;
         cout<<"\nStudent name : "<<name<<endl;
      }
};
class student_exam:public student
{ public:
    int marks[6];
      void setmarks()
      {
         for(int i=0;i<6;i++)
        {
          cout<<"Enter marks of subject "<<i+1<<" : ";
          cin>>marks[i];
        }
      }
      void showmarks()
      { for(int j=0;j<6;j++)
         {
           cout<<"\nMarks of subject "<<(j+1)<<" : "<<marks[j];
         }
      }

};
class student_result:public student_exam
{ public:
    int sum=0,i;
    float percent=0;

        void result()
        {  for(int i=0;i<6;i++)
          {
            sum=sum+marks[i];
          }
          percent=(sum/600.00)*100.00;
        }
};
int main()
{ int num;
    cout<<"Enter number of students you want : ";
    cin>>num;
    cout<<"\n--------------------------------------"<<endl;
  student_result s[num];
       for(int i=0;i<num;i++)
       { s[i].setdata();
         s[i].setmarks();
         s[i].result();
         cout<<"-----------------------------------------"<<endl;
         cout<<"************ student marklist ************"<<endl;
         cout<<"-----------------------------------------"<<endl;
         s[i].showdata();
         s[i].showmarks();
         cout<<"\n";
         cout<<"\nTotal pecentage : "<<s[i].percent<<endl;
       }
 return 0;
}
