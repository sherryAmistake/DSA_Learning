#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[] = {0,2,3,4,5,5,6,7,8,9,12};
    int size = sizeof(arr)/sizeof(int);

    int min = INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout<<"The minimum number is "<<min;
}