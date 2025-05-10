//FINDING AN INDEX TO AN ELEMENT WHICH IS ADDED TO A ARRAY
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,target;
    int ans=0;
    int arr[50];
    cout<<"enter the number of elements in an array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)  
    {
       cin>>arr[i];
    }
    cout<<"Enter target element which is added to an array: ";
    cin>>target;
    arr[n]=target;//INSERTING AN ELEMENT WHICH IS ENTERED 

    sort(arr,arr+n+1);//SORTING AN ARRAY AFTER INSERTING ELEMENT

    for(int i=0;i<n+1;i++)
    {
        if(arr[i]==target)//SEARCHING AN ELEMENT USING SIMPLE SEARCH
        {   ans=i;
        }
    }    

    cout<<"Entered target can be inserted  at index: "<<ans;

}
   
    