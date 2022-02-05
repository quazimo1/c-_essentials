#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10,3,25,67,7};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int value = linearSearch(arr,n,key);
    if(value != -1)
    {
        cout<<key<<" is there and its at index "<< value <<endl;

    }
    else{
        cout<<key<<" is NOT there"<<endl;
    }
    return 0;
}
