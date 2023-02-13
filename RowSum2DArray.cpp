#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main()
{
    // int arr[3][3];
    // int row=3;
    // int col=3;
    vector<vector<int> > arr(3, vector<int>(4,0));
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr.size(); j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    } 

}