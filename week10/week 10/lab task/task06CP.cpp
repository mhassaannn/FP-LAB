#include <iostream>
using namespace std;

string checkAlphabetCase(char ch) 
{
    if (ch == 'A') 
    {
        return "You have entered Capital A";
    }
    
    else if (ch == 'a')
    
    {
        return "You have entered small A";
    }
    
    else
    {
        return "Invalid input";
    }
}

int main() 
{
    char input;
    cout << "Enter a character (A or a): ";
    cin >> input;

    string result = checkAlphabetCase(input);
    cout << result << endl;

    return 0;
}