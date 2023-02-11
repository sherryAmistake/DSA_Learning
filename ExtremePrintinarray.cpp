#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Size of array is "<<size<<endl;

    int start = 0;
    int end = size-1;

    while(true)
    {
        if(start>end)
        {
            break;
        }
        if(start == end)
        {
            cout<<arr[start]<<" "<<endl;
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }

        start++;
        end--;
    }
}