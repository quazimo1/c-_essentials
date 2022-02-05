#include<iostream>
using namespace std;

int main()
{
	string str = "hello";
	int s = 0; 
    int e = strlen(str.c_str()) - 1;
    char reverse_str[strlen(str.c_str()) + 1];
    strcpy(reverse_str, str.c_str());
    while(s < e)
    {
        swap(reverse_str[s], reverse_str[e]);
        s++;
        e--;
    }
    if(strcmp(reverse_str, str.c_str()) == 0)
    {
        cout<< "true";
    }
    else
    {
        cout<< "false";
    }



}