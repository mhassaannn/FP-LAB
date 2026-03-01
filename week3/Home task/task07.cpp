#include<iostream>
using namespace std;

main()

{
	cout << "Enter the movie name: ";
	string movie;
	cin>>movie;

	cout << "Enter the adult ticket price: $";
	int adult;
	cin>>adult;

	cout << "Enter the child ticket price: $";
	int child;
	cin>>child;

	cout << "Enter the number of adult ticket sold: ";
	int adultsold;
	cin>>adultsold;

	cout << "Enter the number of child ticket sold: ";
	int childsold;
	cin>>childsold;

	cout << "Enter the percentage of amount donated to charity: ";
	int donation;
	cin>>donation;

	int totalticketsold;
	totalticketsold = adult*adultsold+child*childsold;

	int donationamount;
	donationamount = (totalticketsold*donation)/100;

	int remainingamount;
	remainingamount = totalticketsold-donationamount;

	cout << "----------------------------------------------------------"<<endl;

	cout << "Movie: "<<movie <<endl;
	cout << "Total Amount generated from ticket sales: $" <<totalticketsold <<endl;
	cout << "Donation for charity(15): $"<<donationamount <<endl;
	cout << "Remaining amount after donation: $"<<remainingamount;
}