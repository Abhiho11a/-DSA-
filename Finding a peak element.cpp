#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[20];
    cout<<"enter number of elements: ";
    cin>>n;
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
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
}
