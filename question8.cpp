/*- In a bank, different customers have savings account. Some customers may have taken a
loan from the bank. So bank always maintain information about bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’ customers.*/
#include<iostream>
using namespace std;
class customer
{  char name[20];
   long long ph_number;
     public:
      void set_customer()
      { cout<<"\nEnter customer Name : ";
        cin>>name;
        cout<<"\nEnter customer phone Number : ";
        cin>>ph_number;
      }
      void show_cutomer()
      {
        cout<<"\nCustomer Name     : "<<name;
        cout<<"\nCustomer phone no : "<<ph_number;
      }
};
class depositer : public customer
{  long long ac_number;
   int balance;
    public:
       void set_depositer()
       { cout<<"\nEnter customer A/c no. : ";
         cin>>ac_number;
         cout<<"\nEnter Balance : ";
         cin>>balance;
       }
       void show_depositer()
       {
         cout<<"\nCustomer A/C no.  : "<<ac_number;
         cout<<"\nBalance           : "<<balance;
       }

};
class borrower : public depositer
{ int loan_number;
  int loan_amount;
   public:
       void set_borrower()
       { cout<<"\nEnter Loan no. : ";
         cin>>loan_number;
         cout<<"\nEnter Loan Amount : ";
         cin>>loan_amount;
       }
       void show_borrower()
       {
         cout<<"\nLoan no.          : "<<loan_number;
         cout<<"\nLoan amount       : "<<loan_amount;
         cout<<"\n-------------------------\n";
       }
};
int main()
{ int num;
    cout<<"\nEnter number of customer details you want : ";
    cin>>num;
   borrower b[num];
      for(int i=0;i<num;i++)
      { b[i].set_customer();
        b[i].set_depositer();
        b[i].set_borrower();
        cout<<"\n---------------------------\n";
      }
      for(int i=0;i<num;i++)
      { cout<<"\nDetails Of Customer "<<endl;
        cout<<"\n-------------------------\n";
         cout<<"\n";
         b[i].show_cutomer();
         b[i].show_depositer();
         b[i].show_borrower();
      }
 return 0;
}
