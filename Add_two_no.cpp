#include<iostream>
using namespace std;

int add()
{
    int c,a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum of two no. is "<<c;
    return 0;
}

int main()
{
    add();
}