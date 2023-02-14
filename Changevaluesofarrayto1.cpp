#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int a[5] = {1,3,5,7,9};
    memset(a, -1, sizeof(a));
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}