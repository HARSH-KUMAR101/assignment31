/*Write a C++ program to demonstrate how a common friend function can be used to
exchange the private values of two classes. (Use call by reference method).*/
#include<iostream>
using namespace std;
class B;
class A
{ protected:
    int num1;
public:
    A(int num1):num1(num1){};
      void show()
      {
         cout<<"value of first number is "<<num1;
      }
      friend void swap(A &num1,B &num2);
};
class B
{ protected:
    int num2;
public:
    B(int num2):num2(num2){};
      void show()
      {
         cout<<"\nvalue of second number is "<<num2<<endl;
      }
      friend void swap(A &num1,B &num2);
};
void swap(A &no1,B &no2)
{ int no3;
    no3=no1.num1;
    no1.num1=no2.num2;
    no2.num2=no3;

}
int main()
{ A a(10);
  B b(20);
   swap(a,b);
   a.show();
   b.show();
 return 0;
}
