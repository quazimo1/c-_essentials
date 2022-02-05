#include<bits/stdc++.h>
using namespace std;

int earthLevel(int k)
{
    //your code goes here
    int set_bit = 0;
    while(k > 0)
    {
        k = k & (k - 1);
        set_bit++;
    }
}