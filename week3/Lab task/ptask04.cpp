#include<iostream>
using namespace std;

main()

{
	cout << "Enter Imposter Count :";
	int i;
	cin>>i;

	cout << "Enter Player Count :";
	int p;
	cin>>p;

	int chance;
	chance = 100 * (i/p);
	cout << "Chance of being an Imposter :" << chance ;
}