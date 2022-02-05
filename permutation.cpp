#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string sort_string(string A)
{
	for(int i = 0; i < A.size() - 1; i++)
	{
		for(int j = 0; j < A.size() - 1 - i; j++)
		{
			if((int)A[j] > (int)A[j + 1])
			{
				swap(A[j], A[j + 1]);
			}
		}
	}
	return A;
}

bool are_permutation(string A, string B)
{
	A = sort_string(A);
	B = sort_string(B);
	
	if(A.compare(B) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	string A, B;
	getline(cin, A);
	getline(cin, B);
	cout<<are_permutation(A, B);
}