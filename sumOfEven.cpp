#include<iostream>
using namespace std;

int EvenSum(int n)
{
    int sum = 0;
    for(int i=2; i<=n; i+=2)
    {
            sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<"The Sum of Even No. is"<<EvenSum(n);
}