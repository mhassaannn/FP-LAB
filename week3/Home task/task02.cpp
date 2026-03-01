#include<iostream>
using namespace std;

main()

{
	cout << "Number of minutes :";
	int length;
	cin>>length;
	
	cout << "Frames per second :";
	int FPS;
	cin>>FPS;
	
	int minute_into_seconds;
	minute_into_seconds=length*60;

	int frames;
	frames = minute_into_seconds *FPS;
	cout << "Total frames :" << frames; 
}