#include <iostream>
using namespace std;

class Customer
{
   string name;
   int acc_no, balance;

   public:
   //default cunstructor
   Customer()
   {
    name="Rakesh";
    acc_no=1211;
    balance=1000;
   }

   //custructor overloding
   Customer(string a, int b)
   {
   name="Jagesh";
   acc_no=2121;
   balance=2000;
   }

   //inline cunstructor
   Customer(string a , int b, int c):name(a),acc_no(b),balance(c)
   {

   }
   void display()
   {
     cout<<name<<" "<<acc_no<<" "<<balance<<" "<<endl;
   }

   Customer(Customer &B)  //<---copy constructor
   {
    name = B.name;
    acc_no=B.balance;
    B.balance=balance;
   }

};
int main()
{
    Customer A1;
    Customer A2 ("Rakesh",5656,6600);
    Customer A3("mohit", 21);
    A1.display();
    A2.display();
    A3.display();
    Customer A4(A3);
    A4.display();
    Customer A5;
    A5 = A3;
    A5.display();
}