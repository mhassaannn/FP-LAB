#include<iostream>
using namespace std;

main()

{
	cout << "Enter vegetable price per kilogram (in coins): ";
	float vegprice;
	cin>>vegprice;

	cout << "Enter fruit price in kilogram (in coins): ";
	float fruitprice;
	cin>>fruitprice;

	cout << "Enter total kilograms of vegetables: ";
	int totalvegs;
	cin>>totalvegs;

	cout << "Enter total kilograms of fruits: ";
	int totalfruits;
	cin>>totalfruits;

	float totalearning;
	totalearning = (vegprice*totalvegs+fruitprice*totalfruits)/1.94;

	cout << "Total earnings in rupees (Rps): "<<totalearning;
}