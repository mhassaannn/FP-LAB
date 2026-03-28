#include<iostream>
using namespace std;

main()

{
    int size;
    cout<<"Numbers you want to enter: ";
    cin >> size;

    int a[size];
    for(int i=0; i<size; i=i+1)
    {
        cout<<"Enter the number: ";
        cin >> a[i];
    }
    for(int i=0; i<size; i=i+1)
    {
        cout<<"The number you entered is "<<a[i]<<endl;
    }
}