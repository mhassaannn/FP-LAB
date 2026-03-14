#include<iostream>
using namespace std;

main()

{
    cout << "Holidays: ";
    int holidays;
    cin>>holidays;

    int working_days;
    working_days=365-holidays;

    int play_time;
    play_time=working_days*63+holidays*127;

    int difference;
    difference=30000-play_time;

    int hours;
    hours=difference/60;

    int minutes;
    minutes=difference%60;

    if(play_time>30000)
    {
        difference=(-1)*difference;
        hours=difference/60;
        minutes=difference%60;
        
        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes << " minutes more for play" << endl;

    }
    if(play_time<30000)
    {
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
    }
}