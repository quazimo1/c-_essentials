#include<iostream>
#include<vector>
using namespace std;

void sorting_comparator(vector<int> &a, bool flag)
{
    for(int i = 0; i < a.size() - 1; i++)
    {
        int  min_pos = i;
        for(int j = i; j < a.size(); j++)
        {
            if(flag){
                if(a[min_pos] > a[j])
                {
                    min_pos = j;
                }
            }
            else{
                if(a[min_pos] < a[j])
                {
                    min_pos = j;
                }
            }
        }
        swap(a[i], a[min_pos]);
    }
}
int main()
{
    int n; 
    cin>> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sorting_comparator(arr, 0);
    for(int i = 0; i < n; i++)
        {cout<<arr[i]<<endl;}
}