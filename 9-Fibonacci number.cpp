//PROGRAM TO FIND FIBONACCI NUMBER(nTH)
#include<iostream>
using namespace std;

int fibonacci(long long n)
{
    if(n==3)
    {
        return 2;
    }
    if(n==1||n==2)
    {
        return 1;
    }

    return fibonacci(n-2)+fibonacci(n-1);
}

int main()
{
    int n;
    cout<<"TO KNOW Nth FIBONACCI NUMBER\nENTER N: ";
    cin>>n;
    cout<<n<<"th fibonacci number is "<<fibonacci(n);
}