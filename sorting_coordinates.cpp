#include<bits/stdc++.h>
using namespace std;


bool compare_price(pair<string, int> uno, pair<string, int> dos)
{
    return uno.second < dos.second;
}
bool compare_name(pair<string, int> uno, pair<string, int> dos)
{
    return uno.first < dos.first;
}
vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
    // your code  goes here
    if(S == "price")
    {
        sort(v.begin(), v.end(), compare_price);
        return v;
    }
    sort(v.begin(), v.end(), compare_name);
    return v;
}