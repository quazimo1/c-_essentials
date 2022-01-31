#include<iostream>
using namespace std;

int prefixsum(int arr[],int n)
{
    int prefixarr[100] = {0};
    prefixarr[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
        prefixarr[i] = prefixarr[i - 1] + arr[i];
        
    }
    int largestsum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int sum;
            if(i == 0)
            {
                sum = prefixarr[j];
            }
            else
            {
                sum = prefixarr[j] - prefixarr[i - 1];
            }
            largestsum = max(largestsum, sum);
                
        }
    }
    return largestsum;
}
int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout<<"largest sum is "<<prefixsum(arr, n)<<endl;
}


