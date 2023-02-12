#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr;

    int ans  = (sizeof(arr)/sizeof(int));
    cout<<ans<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    //inserting the elements in array
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(12);

    arr.pop_back();

    //printing
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //explicitly giving size
    cout<<"Printing brr ";
    vector<int> brr(10,1);
    for(int i=0; i<brr.size(); i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    cout<<"Printing crr ";
    vector<int> crr{10,20,30,40,50,60,70};
    //printing crr

    for(int i=0; i<crr.size(); i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    vector<int> drr;
    cout<<"Vector crr is empty or not "<<crr.empty()<<endl;
    cout<<"Vector drr is empty or not "<<drr.empty()<<endl;
}