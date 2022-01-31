#include<iostream>
#include<vector>

using namespace std;

// bool check(vector<int> &num, int q)
// {
// 	int s = 0; 
// 	int e = num.size() - 1;
// 	while(s > e)
// 	{

// 	}
// }


vector<bool> subsetSum(vector<int> num, vector<int> query)
{
    int N = query.size();
    // your code goes here
    vector<bool> ans(N);
    bitset<10000> bit;
    bit[0] = 1;
    for(int i = 0; i < num.size(); i++)
    {
    	bit = bit | (bit << num[i]);
    }

    for(int i = 0; i < N; i++)
    {
    	ans[i] = bit[query[i]] ? true : false;
    }
    return ans;
}