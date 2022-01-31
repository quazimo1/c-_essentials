#include <iostream>
#include <vector>
using namespace std;

vector<int> WavePrint(int m , int n, vector<vector<int> > arr)
{
	int start_row = 0;
	int end_column = n - 1;
	int end_row = m - 1;
	vector<int> ans;
	while(end_column >= 0)
	{
		//down the endcolumn
		for(int row = start_row; row <= end_row; row++)
		{
			// cout<<arr[row][end_column];
			ans.push_back(arr[row][end_column]);

		}
		end_column--;

		//up the endcolumn
		if(end_column >= 0)
			{
				for(int row = end_row; row>= start_row; row--)
						{
							// cout<<arr[row][end_column];  
							ans.push_back(arr[row][end_column]);
						}
						end_column--;
			}
	}
	return ans;
}



int main()
{
	int m, n;
	cin>>m>>n;

	vector<vector<int> > arr(m);

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			int x;
			cin>>x;
			arr[i].push_back(x);
		}
	}
	vector<int> ans = WavePrint(m, n, arr);
	for(int i = 0; i < ans.size(); i++)
	{
		cout<<ans[i];
	}
}
















