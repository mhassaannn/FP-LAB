#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float number1, number2;

    cout << "Enter the base Number : ";
    cin>>number1;
    cout << "Enter the exponent Number : ";
    cin>>number2;
    
    cout <<number1<< " raised to the power of "<<number2<< " is : " <<pow(number1, number2);
    return 0;
}