#include<iostream>
using namespace std;

int max(int a, int b, int c);

int main()
{
    int a,b,c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    cout<<"Maximum number is "<<max(a,b,c);
}
int max(int a, int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;
    }
    else
        return c;
}