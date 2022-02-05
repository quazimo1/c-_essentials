#include<iostream>
#include<vector>
using namespace std;

void countingsort(int arr[],int n)
{
    int largest = arr[0];
    for(int i = 0; i < n; i++)
    {
        largest = max(largest,arr[i]);
    }
    vector<int> freq(largest + 1, 0);
    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;

    }
    int j = 0;
    for(int i = 0; i < largest + 1; i++)
    {
        while(freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
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
    countingsort(arr,n);
    for(int i = 0; i < n; i++)
        {cout<<arr[i]<<endl;}
}