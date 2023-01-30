#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the no. of rows";
    cin>>m;
    for(int i=0; i<m; i++)
    {
        for(int j=m-i; j>0; j--)
        {
            cout<<" ";
        }
        for(int j=0; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}