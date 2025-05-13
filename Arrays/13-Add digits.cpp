//Add digits-> adding the digits of a number till the sum appears to be less than 10
#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"ENTER NUMBER: ";
    cin>>n;
    
    while(n>9)
    {
        sum=(n%10)+(n/10);
        n=sum;
    }

    cout<<"Digits After Adding: "<<n<<"\n";
}

