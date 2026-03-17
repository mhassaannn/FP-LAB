#include<iostream>
using namespace std;

main()

{
    char ch = 'y';
    while(ch == 'y')
    {
        cout<<"I am Happy" <<endl;
        cout<<"Press y to contine or any key to exit " <<endl;
        cin>>ch;
    }
}