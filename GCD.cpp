#include <bits/stdc++.h>
using namespace std;

int GCD(int a , int b)
{
    if(a == 0)
    return b;

    return GCD(b%a , a);
}

int main()
{
    int a = 10;;
    int b = 15;

    cout << GCD(a , b) << endl;
}