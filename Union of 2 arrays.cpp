#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{1,2,3,4};
    vector<int> brr{6,6,7,8,9,10};

    //int sizea = sizeof(arr)/sizeof(int);
    //int sizeb = sizeof(brr)/sizeof(int);

     vector<int> ans;
    for(int i=0; i<arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }
    for(int i=0; i<brr.size(); i++)
    {
        ans.push_back(brr[i]);
    }
    // for(int i=0; i<arr.size(); i++)
    // {
    //     int element = arr[i];
    //     for(int j=0; j<brr.size(); j++)
    //     {
    //         // if(element == brr[j])
    //         // {
    //         //     brr[j] == -1;
    //         //     if(element != -1)
    //         //     {
    //         //         ans.push_back(element);
    //         //     }
    //         // }
    //     }
    // }


    //printing Union Array
    cout<<"Union of Array is: ";
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}
