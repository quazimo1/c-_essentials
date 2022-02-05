#include<iostream>
#include<vector>
using namespace std;

void sortingcordinates(vector<pair<int, int> > v)
{
    for(int i = 0; i < v.size() - 1; i++)
    {
        for(int j = 0; j < v.size() - 1 - i; j++)
        {
            if(v[j].first < v[j + 1].first)
            {
                swap(v[j].first, v[j + 1].first);
                swap(v[j].second, v[j + 1].second);
            }
            else if(v[j].first == v[j + 1].first)
            {
                if(v[j].second < v[j + 1].second)
                {
                    swap(v[j].first, v[j + 1].first);
                    swap(v[j].second, v[j + 1].second);
                }
            }
        }
    }
}
int main()
{
    int n; 
    cin>> n;
    vector<pair<int, int> > arr(n);
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    sortingcordinates(arr);
    for(int i = 0; i < n; i++)
        {cout<<arr[i].first<<","<<arr[i].second<<endl;}
}