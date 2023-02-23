/*Write a C++ program to define a base class Item (item-no, name, price). Derive a class
Discounted-Item (discount-percent). A customer purchases 'n' items. Display the item-wise bill
and total amount using appropriate format.*/
#include<iostream>
using namespace std;
class item
{ public:
    int item_no;
  char item_name[20];
  float item_price;
};
class discounteditem:public item
{ public:
    int discount_percent;
    int discounted_price;
       void accept_details()
       { cout<<"\nEnter item name : ";
         cin>>item_name;
         cout<<"\nEnter item no : ";
         cin>>item_no;
         cout<<"\nEnter item price : ";
         cin>>item_price;
         cout<<"\nEnter Discount percent : ";
         cin>>discount_percent;
         cout<<"\n--------------------------------\n";
          discounted_price=item_price-item_price*discount_percent/100;
       }
       void display_details()
       { cout<<"\nItem Name : "<<item_name;
         cout<<"\nItem no. : "<<item_no;
         cout<<"\nItem price : "<<item_price;
         cout<<"\nDiscount percent : "<<discount_percent;
         cout<<"\nDiscounted price : "<<discounted_price;
         cout<<"\n------------------------------";
       }
};
int main()
{ int i,cnt,discount=0,price=0;
    discounteditem dt[100];
       cout<<"how many items you want to enter ";
       cin>>cnt;
       for(i=0;i<cnt;i++)
       {
           dt[i].accept_details();
       }
       for(i=0;i<cnt;i++)
       {
           dt[i].display_details();
       }
        for(i=0;i<cnt;i++)
       {
           price=price+dt[i].item_price;
       }
       for(i=0;i<cnt;i++)
       {
           discount=discount+dt[i].item_price-dt[i].discounted_price;
       }

        cout<<"\nTotal price : "<<price;
        cout<<"\nTotal discount : "<<discount;
        cout<<"\nTotal payable amount : "<<price-discount;

        cout<<"\n please visit again \n";
 return 0;
}




