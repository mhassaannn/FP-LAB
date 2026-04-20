#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float rad;
    int dis;
    int angle;

    cout<<" Enter the distance from the base of the tree (in feet): ";
    cin>>dis;

    cout<<" Enter the angle of elevation (in degrees): ";
    cin>>angle;

    rad = angle/57.2958;

    float ans= tan(rad);
    cout<<" The height of the tree is: " << dis * ans << " feet"; 
    return 0;
}
