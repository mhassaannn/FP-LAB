#include<iostream>
using namespace std;

main()

{
    char going;

    cout<<"Are your friends going?(Press Y for yes): ";
    cin>>going;

    if(going=='Y')
    {
        cout<<"You are going!";
    }
    if (going=='N')
    {
        cout<<"you are not going!";
    }
}