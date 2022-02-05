#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    int a = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(i == 1 and a == 0)
        {
            break;
        }
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j + 1] < arr[j])
            {
                swap(arr[j + 1], arr[j]);
                a++;
            }
        }
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
    bubblesort(arr,n);
    for(int i = 0; i < n; i++)
        {cout<<arr[i]<<endl;}
}