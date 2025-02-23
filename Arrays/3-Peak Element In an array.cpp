//Peak e]lement is the element which is greater than its neighbours
//Approach: 1. Traverse the array and check if the element is greater than its neighbours
//          2. If yes, then print the index of that element
//          3. If no, then continue the loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[20];
    int ans=0;
    cout<<"enter number of elements: ";
    cin>>n;
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    /*
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    mid=s+(e-s)/2;
    return s;
    }
    cout<<s;      



    */


   for(int i=0;i<n-1;i++)
   {
    if(arr[i]>arr[i+1])
    {
        ans= i;
        break;
    }
    else
    {
        continue;
    }
   }
   cout<<ans;
}