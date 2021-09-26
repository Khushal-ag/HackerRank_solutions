#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int lower = 0, upper = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
        else
            upper++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if(upper>lower){
            if(s[i]>='a' && s[i]<='z') s[i]-=32; 
        }
        else{
            if(s[i]>='A' && s[i]<='Z') s[i]+=32;
        }
    }
    cout << s;
}