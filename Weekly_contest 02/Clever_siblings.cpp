#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    vector<int> v;
    long long sum = 0, sum1 = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
        sum += temp;
    }
    sort(v.begin(), v.end());
    for (int i = n - 1; i >= 0; i--)
    {
        sum1 += v[i];
        if (sum1 <= sum - sum1)
            count++;
        else
            break;
    }
    cout << ++count;

    return 0;
}