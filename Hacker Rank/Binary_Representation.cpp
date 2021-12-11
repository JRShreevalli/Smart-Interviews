// Given a positive integer, print its binary representation.
// Note: Do not use any inbuilt functions/libraries for your main logic.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


    void decToBin(unsigned n)
    {
        if (n > 1)
            decToBin(n / 2);
 
        cout << n % 2;
    }

int main() 
{
    int t ;
    cin >> t ;
    int i , a[t] ;
    for(i=0; i<t; i++)
        cin >> a[i] ;
    for(i=0 ; i<t ; i++)
    {
        decToBin(a[i]);
        cout << endl ;
    }
    return 0;
}
