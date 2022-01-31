//
//  5.cpp
//  xcode_c++
//
//  Created by harshil gupta on 31/10/21.
//

#include "5.hpp"
#include<iostream>
using namespace std;

void sumofsubarrays(int arr[], int n)
{
    int idk = arr[0];
    for(int i = 0; i < n; i++)
    {
        
        for(int j = i ; j < n; j++)
        {
            int sum = 0;
            for(int k = i; k <= j; k++)
            {
                sum += arr[k];
                cout<<arr[k];
            }
            idk = max(sum,idk);
            cout<<"     subarray indicies is"<<i<<","<<j<<"sum is "<<sum<<endl;
            
        }
    }
    cout<<"largest sum is "<<idk<<endl;
}
int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    sumofsubarrays(arr, n);
}
