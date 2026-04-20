#include <iostream>
using namespace std;

bool isSymmetrical(int num) 
{
    int original = num;
    int reversed = 0;

    while (num > 0) 
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() 
{
    int number;
    cout << "Enter a 3-digit number: ";
    cin >> number;

    if (isSymmetrical(number)) 
    {
        cout << "True (Symmetrical Number)" << endl;
    }
    
    else 
    {
        cout << "False (Not Symmetrical)" << endl;
    }

    return 0;
}