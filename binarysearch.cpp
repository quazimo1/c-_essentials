#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n,int key)
{
    int s = 0;
    int e = n - 1;
    while(s<= e)
    {
        int mid=(s+e)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,69,101,55};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int y = BinarySearch(arr,n,key);
    if(y!= -1)
    {
        cout<<y + 1<<endl;
    }
    else{
        cout<<"not found!!";
    }
    return 0;
}
