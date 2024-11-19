#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[20];int arr1[20];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arr1[0]=arr[n-2];
    arr1[1]=arr[n-1];
       
    for(int i=0;i<n;i++)
    {
        arr1[i+2]=arr[i];
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
} 