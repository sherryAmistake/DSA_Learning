#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter rows and columns";
    cin>>m>>n;
    for (int r=0; r<m; r++)
    {
        for(int c=0; c<n; c++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}