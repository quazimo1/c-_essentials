#include<iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
    for(int pos = 0; pos < n - 1; pos++)
    {
        int min_pos = pos;
        for(int j = pos; j < n; j++)
        {
            if(arr[j] < arr[min_pos])
            {
                min_pos = j;
            }
        }
        swap(arr[pos], arr[min_pos]);
    }
} 

int main()
{
    int n; 
    cin>> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for(int i = 0; i < n; i++)
        {cout<<arr[i]<<endl;}
}