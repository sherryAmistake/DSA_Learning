#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[] = {2,1,5,6,4,8,67,12,14,45};
    int size = sizeof(arr)/sizeof(int);

    int max = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<"The maximum number is "<<max;
}