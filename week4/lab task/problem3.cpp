#include<iostream>
using namespace std;

main()

{
    string word1, word2;

    cout << "Enter first name: ";
    cin>>word1;
    
    cout << "Enter second word: ";
    cin>>word2;

    if(word1==word2)
    {
        cout<< "Yes, the words are same";
    }

    else
    {
        cout << "No, the words are different";
    }
}