#include<iostream>
using namespace std;
/*
          *
        * * * 
      * * * * *
    * * * * * * *
  * * * * * * * * * 


*/


int main()
{
    int m;
    cout<<"Enter the no. of rows";
    cin>>m;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=m; i>=0; i--)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}