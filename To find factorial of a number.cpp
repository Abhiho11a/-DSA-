//To find factorial of a number 
#include <iostream>
using namespace std;

int factorial(int n)
{ 
  if(n==0)
   {return 1;}
  int factnm1 = factorial(n-1);
  int factn = n*factnm1;
  return factn;
}


int main()
{int n;
 cout<<"------PROGRAM TO FIND THE FACTORIAL OF A NUMBER------"<<"\n\n";
 cout<<"Enter a number: ";
 cin>>n;
 cout<<"Factorial of "<<n<<" is "<<factorial(n);
}
 
  