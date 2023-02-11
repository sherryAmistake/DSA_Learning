#include<iostream>
using namespace std;

int main()
{
    
    int arr[] = {0,0,1,0,1,1,1,0,0};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Size of array is "<<size<<endl;
    int NumZero = 0;
    int NumOne = 0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==0)
        {
            NumZero++;
        }
            
        if(arr[i]==1)
        {
            NumOne++;
        }
            
    }
    cout<<"Number of 0 are "<<NumZero<<endl;
    cout<<"Number of 1 are "<<NumOne<<endl;
}