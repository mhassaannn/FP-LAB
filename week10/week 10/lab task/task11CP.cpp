#include <iostream>
using namespace std;

const char* calculatePoolState(int V, int P1, int P2, int H) 
{
    int totalWater = (P1 + P2) * H;

    if (totalWater < V) 
    {
        cout << "The pool is " << (totalWater * 100) / V << "% full." << endl;
        cout << "Pipe 1: " << (P1 * H * 100) / totalWater << "%." << endl;
        cout << "Pipe 2: " << (P2 * H * 100) / totalWater << "%." << endl;
        return "Pool is not full";
    }

    else if (totalWater == V) 
    {
        return "The pool is exactly full.";
    }

    else 
    {
        cout << "For " << H << " hours the pool overflows with "
             << (totalWater - V) << " liters." << endl;
        return "Pool overflowed";
    }
}

int main() 
{
    int V, P1, P2, H;

    cout << "Enter pool volume in litres: ";
    cin >> V;

    cout << "Enter pipe 1 flow rate per hour: ";
    cin >> P1;

    cout << "Enter pipe 2 flow rate per hour: ";
    cin >> P2;

    cout << "Enter hours that the worker is absent: ";
    cin >> H;

    cout << calculatePoolState(V, P1, P2, H) << endl;

    return 0;
}