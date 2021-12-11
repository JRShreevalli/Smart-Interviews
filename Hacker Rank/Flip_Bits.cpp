// You are given two numbers A and B. 
// Write a program to count the number of bits to be flipped 
// to change the number A to the number B. Flipping a bit of a 
// number means changing a bit from 1 to 0 or vice versa.



#include <iostream>
using namespace std ;

int CountBits(int exor)
{
    int count = 0;
    while(exor > 0)
    {
        count = count + 1 ;
        exor = exor & exor-1 ;
    }
    return count ;
}
int Bits(int m , int n)
{
    int exor = m ^ n ;
    return CountBits(exor);
}
int main()
{
    int t , i;
    cin >> t ;
    int a[t] , b[t] ;

    for (i=0 ; i<t ; i++)
        cin >> a[i] >> b[i] ;

    for(i=0 ; i<t ; i++)
        {
            cout << Bits(a[i],b[i]) << endl ;
        }
    return 0 ;
}

