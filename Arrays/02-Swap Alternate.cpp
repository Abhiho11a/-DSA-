//TO SWAP ALTERNATE TERMS IN AN ARRAY
#include<iostream>
using namespace std;

int main()
{
    int arr[20];
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN AN ARRAY ";
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];


    //LOGIC
    for(int i=0;i<n;i+=2)
    if(i+1<n)
    {
        int temp=arr[i];//swapping
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }


    //OUTPUT PRINTING
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";


}
    
