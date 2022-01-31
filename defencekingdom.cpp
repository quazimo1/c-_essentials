#include<iostream>
#include<vector>
using namespace std;

int sortingcordinates(vector<pair<int, int> > postion, int W, int H)
{
    for(int i = 0; i < postion.size() - 1; i++)
    {
        for(int j = 0; j < postion.size() - 1 - i; j++)
        {
            if(postion[j].first > postion[j + 1].first)
            {
                swap(postion[j].first, postion[j + 1].first);
            }
            if(postion[j].second > postion[j + 1].second)
            {
                swap(postion[j].second, postion[j + 1].second);
            }
            
        }
    }
    int max_x = 0;
    int max_y = 0;
    
    for(int i = 0; i < postion.size() - 1; i++)
    {
        max_x = max(max_x, postion[i + 1].first - postion[i].first - 1);
        max_y = max(max_y, postion[i + 1].second - postion[i].second - 1);
    }
    max_x = max(max_x, W - postion[postion.size() - 1].first);
    max_y = max(max_y, H - postion[postion.size() - 1].second);
    max_x = max(max_x, postion[0].first - 1);
    max_y = max(max_y, postion[0].second - 1);
    return max_y * max_x;
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
    int x;
    int y;
    cin>>x>>y;
    cout<<sortingcordinates(arr, x, y)<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i].first;
        cout<<arr[i].second<<endl;
    }
}