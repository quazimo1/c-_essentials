#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no. of students"<<endl;
    cin>>n;

    cout<<"enter marks of students"<<endl;
    int marks[n];
    for(int i = 0; i < n; i++)
    {
        cin>>marks[i];
    }

    cout<<"marks of the students are"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<< marks[i]<<" ,";
    }
    int idk[3] = {1,2,3};
    cout<<endl;
    cout<<idk[3];
}