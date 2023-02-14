#include<iostream>
using namespace std;


bool search(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
            return true;
    }
        return false;
}

int main()
{
    int arr[] = {1,3,5,7,9,12,34,45};
    int size = sizeof(arr);
    
    cout<<"Enter the value";
    int key;
    cin >> key;

    if(search(arr, size, key))
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not Found";
    }
}