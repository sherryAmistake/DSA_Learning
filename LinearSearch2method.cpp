#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,3,4,5,6,7,8,9};
    int size = sizeof(arr);
    cout<<"Enter the value to be found";
    int key;
    cin>>key;
    bool flag=0;

    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
    }

    if(flag)
    {
        cout<<"present";
    }
    else
    {
        cout<<"Not Present";
    }
}