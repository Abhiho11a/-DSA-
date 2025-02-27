//MAXIMUM WATER THAT CAN BE ACCOMODATED IN GRAPH

#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[20];
    cout<<"enter number of elements ";
    cin>>n;
    cout<<"enter elements ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxwater=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int wid=j-1;
            int hei=min(arr[i],arr[j]);
            int currentwater=hei*wid;

            maxwater=max(maxwater,currentwater);
        }
    }



    cout<<"Maximum water that can be stored is "<<maxwater;
}