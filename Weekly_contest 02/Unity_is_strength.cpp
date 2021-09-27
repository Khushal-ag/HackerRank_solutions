#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int temp;
    set<int> se;
    cin >> n;
    int p;
    cin >> p;
    while (p--)
    {
        cin >> temp;
        se.insert(temp);
    }
    cin >> p;
    while (p--)
    {
        cin >> temp;
        se.insert(temp);
    }
    if (se.size() == n)
        cout << "Unity is Strength";
    else
        cout << "Impossible";
    return 0;
}