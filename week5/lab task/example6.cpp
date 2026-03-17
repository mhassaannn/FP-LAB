#include<iostream>
using namespace std;

main()

{
    int value;
    cout<<"Please enter a positive number: ";
    cin>>value;

    while(value < 0)
    {
        cout<<"error: " <<value<< " is not a positive number "<<endl;
        cout<<"Please enter a positive number: ";
        cin>>value; 
    }
    cout<<"program ends "<<endl;
}