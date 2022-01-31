#include<iostream>
using namespace std;

string vowel(string S)
{
	for(int i = 0; i < S.size(); i++)
	{
		if(S[i] == (int)'a' or S[i] == (int)'e' or S[i] == (int)'i' or S[i] == (int)'o' or S[i] == (int)'u')
		{
			continue;
		}
		else
		{
			S.erase(i, 1);
			i--;
		}
	}
	return S;
}

int main()
{
	string s;
	getline(cin, s);
	cout<<vowel(s);
}