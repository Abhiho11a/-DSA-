//PROGRAM TO CHECK WHEATHER THE THE ENTERED NUMBER IS HAVING ONLY 2,3,5 AS A FACTORS
//IF YES THEN IT IS AN UGLY NUMBER
#include<iostream>
using namespace std;

bool ugly(int n)
{
    if(n<=0)
    {
        return false;
    }

    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else if(n%3==0)
        {
            n=n/3;
        }
        else if(n%5==0)
        {
            n=n/5;
        }
        else{
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cout<<"ENTER A NUMBER: ";
    cin>>n;
    if(ugly(n))
    {
        cout<<"IT IS AN UGLY NUMBER";
    }
    else{
        cout<<"IT IS NOT AN UGLY NUMBER";
    }
    
}