#include <iostream>
#include <cmath>
using namespace std;

const char* numberToWords(int num) 
{
    const char* ones[] = 
    {
        "", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    const char* teens[] = 
    {
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    const char* tens[] = 
    {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"
    };

    if (num < 10) 
    {
        return ones[num];
    }

    else if (num < 20) 
    {
        return teens[num - 10];
    }

    else if (num % 10 == 0) 
    {
        return tens[num / 10];
    }

    else 
    {
        // For numbers like 21, 34, etc.
        cout << tens[num / 10] << "-";
        return ones[num % 10];
    }
}

int main() 
{
    int n;
    cout << "Enter number (1-99): ";
    cin >> n;

    if (n >= 1 && n <= 99) 
    {
        cout << numberToWords(n);
    }
    
    else 
    {
        cout << "Out of range";
    }

    return 0;
}