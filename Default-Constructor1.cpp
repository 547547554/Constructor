//1.It is special function that invoked auotomatically at the time of object creation
//2.name of the constructor should be same as class name 
//3.It doesn't any return type 
//It is used to intialize the value

#include<iostream>
using namespace std;

class Customer
{
     
    string name;
    int account_no,balance;

    public:
    Customer ()  //<-Default constructor
    {
      name="Rakesh";
      account_no=23333;
      balance=100;

    }
    void display()
    {
        cout<<" My name is : "<<name<<" \n"<<" My account number is : "<<account_no<<" \n"<<" My balance is : "<<balance<<" "<<endl;
    }
};

int main ()
{
    Customer A1;
    A1.display();
}