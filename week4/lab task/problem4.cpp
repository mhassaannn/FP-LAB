#include<iostream>
using namespace std;
main()

{
    string my_password, user_enter;

    my_password = "hello";
    cout << "Enter your password: ";
    cin>>user_enter;

    if(user_enter == my_password)
    {
        cout << "wow! You have cracked the code!";
    }

    else
    {
        cout << "Try again :) ";
    }
}