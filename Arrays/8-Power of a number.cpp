//TO FIND POWER OF A NUMBER
#include<iostream>
using namespace std;
int main()
{
 int n,N;double ans=1;
 float x,X;
 cout<<"enter number ";
 cin>>X;
 cout<<"enter power ";
  cin>>N;
  n=N;
  x=X;
 if(n<0)
 {
  n=-n;
 x=1/x;

 }

 while(n!=0)
 {
  if(n%2==1)
  {
    ans=ans*x;
  }
    x=x*x;
    n=n/2;

 }
 
 cout<<X<<" power "<<N<<" is "<<ans;}