#include<iostream>
using namespace std;

void printpairs(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
        cout<<endl;
    }
}
int main()
{
    int arr[] = {1,23,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    printpairs(arr,n);
}