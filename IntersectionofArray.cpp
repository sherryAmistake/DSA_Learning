#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr1{1,2,3,3,3,4,6,8};
    vector<int> arr2{3,3,4,2,1,9,10};
    vector<int> ans;

    for(int i=0; i<arr1.size(); i++)
    {
        for(int j=0; j<arr2.size(); j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr2[j] = -1; //marking for checked values, so that one value does not get repeated
                ans.push_back(arr1[i]);
            }
        }
    }

    //printing common elements from ans array
    cout<<"Intersection of Elements are: ";
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}