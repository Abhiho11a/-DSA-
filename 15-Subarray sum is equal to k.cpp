//PROGRAM TO FIND THE NUMBER OF POSSIBLE SUBARRAYS WHOSE SUM IS EQUAL TO TARGET
#include<iostream>
using namespace std;
int main()
{
    int n,target;
    int arr[30];
    int sumarr[30];
    cout<<"Enter the number of elements in an array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target sum: ";
    cin>>target;
    int sum=0;
    for(int i=0;i<n;i++)
    {  sum+=arr[i];
        sumarr[i]=sum;

    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(sumarr[i]==target)
        {
           count++;
        }
    }
   for(int i=0;i<n;i++)
   {
    for(int j=i;j<n;j++)
    {
    if(sumarr[j]-sumarr[i]==target)
    {count++;}
    }
   }
cout<<"Maximum number of subarrays whose sum is "<<target<<" is "<<count;
}