
#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_no, balance;

public:
    Customer() //<-Default constructor
    {
        name = "Rakesh";
        account_no = 23333;
        balance = 100;
    }

    Customer(string a, int b, int c) //<-- Parameterized cunstructor
    {
        name = a;
        account_no = b;
        balance = c;
    }

    Customer(string a, int b) //<--cunstructor overloding
    {
        name = a;
        account_no = b;
    }

    void display()
    {
        cout << "My name is  " << name << "\n"
                                          "My accoundt no is  "
             << account_no << "\n"
                              "My balnce is  "
             << balance << "\n"
             << endl;
    }
};
int main()
{
    Customer A1;
    A1.display();

    Customer A2("jagesh",3467,200);
    A2.display();

     Customer A3("Rohan",7654,0);
    A3.display();
}