#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the no. of rows";
    cin>>m;
    for(int i=m; i>=1; i--)
    {
        for(int j=m-i; j>=1; j--)
        {
            cout<<" ";
        }
        for(int k=1; k<i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}