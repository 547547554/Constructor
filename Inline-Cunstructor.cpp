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
  inline Customer(string a , int b, int c):name(a),acc_no(b),balance(c)
   {

   }
   void display()
   {
     cout<<name<<" "<<acc_no<<" "<<balance<<" "<<endl;
   }

};
int main()
{
    Customer A;
    A.display(); 
}