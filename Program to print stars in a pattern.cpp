//Program to print stars in pattern

#include<iostream>
using namespace std;

int main()
{
 int i=1;int N;
 cout<<"Enter number:"; 
 cin>>N;
 while(i<=N)
 {
  int j=N;
  while(j>=i)
  {
   cout<<"*";
   j--;
  }
  cout<<"\n"; 
  i++;

 }
 
}