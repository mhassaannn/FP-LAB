#include <iostream>
using namespace std;

string oddishOrEvenish(int num)
{
    int sum = 0;

    while (num > 0) 
    {
        sum += num % 10;
        num /= 10;        
    }

    if (sum % 2 == 0)
        return "Evenish";
    else
        return "Oddish";
}

int main() 
{
    int number;
    cout << "Enter a 5-digit number: ";
    cin >> number;

    cout << oddishOrEvenish(number) << endl;

    return 0;
}