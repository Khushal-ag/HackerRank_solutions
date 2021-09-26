#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // Input for T test cases
    while (t--)
    {
        float r; 
        int d1, d2, h1, h2; 
        cin >> r >> d1 >> d2 >> h1 >> h2; // Taking input
        float dist = sqrt(pow(d1 - h1, 2) + pow(d2 - h2, 2)); // Calculating distance from drone to human activity(Distance formula)
        // If distance is larger than radius than activity is present outside the circle
        if (dist > r)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}