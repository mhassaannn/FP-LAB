#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float number1, number2;

    cout << "Enter Number 1 : ";
    cin >> number1;
    cout << "Enter Number 2 : ";
    cin >> number2;
    
    cout << "The Minimum of "<<number1<<" and "<<number2<<" is : "<< min(number1, number2);
    return 0;
}