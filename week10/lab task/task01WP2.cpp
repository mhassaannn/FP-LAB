#include <iostream>

using namespace std;

int myFunction(int number);

int main()
{
    int number, result;

    cout << "Enter Number : ";
    cin >> number;

    result = myFunction(number);

    return 0;
}

int myFunction(int number)
{
    int total;
    total = number * 5;
    return total;
}