#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER AN INTEGER: ";
    cin>>n;
    int ans=0;
    while(n!=0)
    {
      int dig=n%10;
      ans=ans*10+dig;
      n=n/10;
    }
    if(ans>pow(2,31)+1||ans<pow(-2,31))
    {
      ans=0;
    }
     cout<<"AFTER REVERSING "<<n<<"WILL BE "<<ans;
}