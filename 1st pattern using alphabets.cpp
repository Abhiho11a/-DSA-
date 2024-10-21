//Program to print alphabets in a pattern

#include<iostream>
using namespace std;

int main()
{
 int i=1;int N;
 cout<<"Enter number: "; 
 cin>>N;
  while(i<=N)
  {
   int j=1;
   char start='A'+i+j-2;
  
   while(j<=i)
   {
    cout<<start;
    start++;
    j++;
   }
 cout<<"\n";i++; 
  }
}