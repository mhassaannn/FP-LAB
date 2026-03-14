#include<iostream>
using namespace std;

main()
{
    string name;

    cout<<"Please Enter your name: ";
    cin>>name;

    if(name == "ali")
    {
        cout<<"Congratulations " <<name<< " on getting admission to UET";
    }

    if(name != "ali")
    {
        cout<<"try again!";
    }
}