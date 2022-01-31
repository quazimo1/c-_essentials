#include <iostream>
#include<vector>
using namespace std;
 



int power(int x, int y, int mod)
{
    // your code goes here
	int ans = 1;
    while(y > 0)
    {
	    int last_didgit = y & 1;
	    if(last_didgit)
	    {	
	    	ans = (ans * last_didgit * x) % mod;
	    }
	    x = (x * x) % mod;
	    y = y >> 1;
    }
    
    return ans;
}
int main()
{
	/* code */
	int x, y, mod;
	cin>>x>>y>>mod;

	cout<<power(x, y, mod);
	return 0;
}