#include<iostream>
#include<math.h>
using namespace std;

int binary_to_decimal(string s)
{
	int ans = 0;;
	for(int i = s.size() - 1, j = 0; i >= 0 and j < s.size(); i--, j++)
	{
		if(s[i] == '1')
		{
			int m = 1;
			for(int z = 0; z < j; z++)
			{
				m *= 2;
			}
			ans += m;
		}
		else
		{
			continue;
		}
	}
	return ans;
}

int main()
{
	string s;
	getline(cin, s);
	cout<<binary_to_decimal(s);
}