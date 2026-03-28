#include<iostream>
using namespace std;

main()

{
    int element;
    int a[100];

    cout<<"enter the number of elements: ";
    cin >> element;

    cout<<"Enter "<<element<<" numbers, one per line "<<endl;
    for(int i=0; i<element; i++)
    {
        cin >> a[i];
    }

    int largest = a[0];
    for(int i=1 ; i < element ; i++)
    {
        if(a[i] > largest)
        {
            largest= a[i] ;
            
        }
        
    }
    cout<<"The largest number entered is: "<<largest;
}