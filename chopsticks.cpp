#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int bubblesort(vector<int> length, int D)
{
    for(int i = 0; i < length.size() - 1; i++)
    {
        for(int j = 0; j < length.size() - 1 - i; j++)
        {
            if(length[j] > length[j + 1])
            {
                swap(length[j], length[j + 1]);
            }
        }
    }
    int s = 0;
    int e = length.size() - 1;
    int count = 0;
    while(s < e)
    {
        if(abs(length[s] - length[e]) <= D)
        {
            count++;
            s++;
        }
        else
        {
            e--;
        }
    }
    return count;

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
    int D;
    cin>>D;
    
    cout<<bubblesort(arr, D)<<endl;
}