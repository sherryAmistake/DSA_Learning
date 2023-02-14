#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{0,1,1,0,1,0,1,0,1,0};
    int start = 0;
    int end = arr.size()-1;
    int i=0;

    while(i != end)
    {
        if(arr[i]==0)
        {
            swap(arr[end],arr[i]);
            end--;
            
        }
        else
        {
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
    }

    cout<<"Printing the Sorted Array: ";

    for(auto values : arr)
    {
        cout<<values<<" ";
    }
    
  
}