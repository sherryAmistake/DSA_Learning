#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    cout<<"Enter the values in array";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    cout<<"Entering the double of array";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]*2<<" "<<endl;
    }
}