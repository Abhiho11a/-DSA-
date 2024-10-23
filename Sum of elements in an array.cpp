//To print sum of elements in an array

#include<iostream>
#include<math.h>
using namespace std;

int sum(int arr[],int n)
{
int sum=0;
for(int i=0;i<=n;i++)
{
sum=sum+arr[i];
}
return sum;
}

int main(){
int arr[50];
int n;
cout<<"ENTER THE NUMBER OF ELEMENTS IN AN ARRAY: ";
cin>>n;
cout<<"ENTER ARRAY ELEMENTS:\n";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Sum of elements in an array is: "<<sum(arr,n);
}