#include<iostream>
using namespace std;

int kadanealgo(int arr[], int n)
{
    int cs = 0;
    int ms = 0;
    for(int i = 0; i < n; i++)
    {
        cs += arr[i];
        cs = cs < 0 ? 0 : cs;
        ms = max(ms,cs);
    }
    return ms;
}
int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout<<"largest sum is "<<kadanealgo(arr,n)<<endl;
}
