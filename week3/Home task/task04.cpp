#include<iostream>
using namespace std;

main()

{
	cout << "Enter Imposter Count :";
	float i;
	cin>>i;

	cout << "Enter Player Count :";
	float p;
	cin>>p;

	float chance;
	chance = 100 * (i/p);
	cout << "Chance of being an Imposter :" << chance ;
}