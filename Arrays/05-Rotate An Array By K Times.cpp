//Program to rotate array by k times
//Time Complexity: O(n)
//Space Complexity: O(n)
//Approach: 1. Take the array as input
//          2. Take an array arr1 of size n
//          3. Take k as input
//          4. Take the last k elements of the array and store them in arr1
//          5. Take the remaining elements of the array and store them in arr1
//          6. Print the array arr1

#include<iostream>
using namespace std;
int main()
{
    int n,k;
    int arr[50];int arr1[50];
    cout<<"ENTER NUMBER OF ELEMENTS: ";
    cin>>n;
    cout<<"ENTER ARRAY ELEMENTS: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"ENTER K(NUMBER OF TIMES TO ROTATE AN ARRAY): ";
    cin>>k;
    int ind=0;
    for(int i=k;i>0;i--)
    {
    arr1[ind++]=arr[n-i];
    }
       
    for(int i=0;i<n;i++)
    {
        arr1[i+k]=arr[i];
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
} 
