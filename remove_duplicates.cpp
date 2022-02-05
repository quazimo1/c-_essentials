#include <iostream>
using namespace std;

string removedupicate(string s)
{
	for(int i = 0; i < s.size() - 1; i++)
	{
		for(int j = 0; j < s.size() - 1 - i; j++)
		{
			if((int)s[j] > (int)s[j + 1])
			{
				swap(s[j], s[j + 1]);
			}
		}
	}

	int ptr1 = 0;
	int ptr2 = 1;
	while(ptr1 < s.size() and ptr2 < s.size())
	{
		if(s[ptr1] == s[ptr2])
		{
			s.erase(ptr1, 1);
		}
		else
		{
			ptr1++;
			ptr2++;
		}
	}
	return s;

}


int main()
{
	string s;
	getline(cin, s);
	cout<<removedupicate(s);
}