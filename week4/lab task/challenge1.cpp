#include<iostream>
using namespace std;

main()

{
     float amount;

    cout<<"enter the amount: ";
    cin>>amount;
    int discount;
    float discounted_amount;
    if (amount <= 5000)
    {
        discount = amount * 0.05;
        discounted_amount = amount - discount;
        cout<<"the discounted amount is "<<discounted_amount<<endl;
     }
 
     if (amount > 5000)
     {
        discount = amount * 0.10;
        discounted_amount = amount - discount;
        cout<<"the discounted amount is "<<discounted_amount<<endl;
    } 
}