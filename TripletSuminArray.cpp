#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{10,20,30,40,50,60,70,80};
    int sum = 90;

    for(int i=0; i<arr.size(); i++)
    {
         int element = arr[i];
        for(int j=i+1; j<arr.size(); j++)
        {
           for(int k=j+1; k<arr.size(); k++)
           {
                if(arr[i]+arr[j]+arr[k]==sum)
                cout<<"("<<element<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
           }
        }
    }
}