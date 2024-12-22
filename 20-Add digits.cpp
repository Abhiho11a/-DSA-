//Add digits-> adding the digits of a number till the sum appears to be less than 10
#include<iostream>
using namespace std;

int main()
{
    int n,sum;
    cout<<"ENTER NUMBER: ";
    cin>>n;

    while(n>9)
    {
        sum=0;
        while(n!=0)
        {
            sum=sum+n%10;
            n=n/10;
        }
        if(sum<10)
        {
            cout<<"ANSWER IS: "<<sum;
            break;
        }
        n=sum;
    }
} 