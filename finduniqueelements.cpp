#include<iostream>
#include<vector>
using namespace std;


int findUnique(vector<int> arr)
{
    int ans = 0;
    for(int i=0; i<arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    //using xor operator this problem is solved
    vector<int> arr{1,1,2,2,4,4,7,5,5,6,6};
    int size = sizeof(arr)/sizeof(int);

    int uniqueElement = findUnique(arr);
    cout<<"The Unique Element is "<<uniqueElement;
}
