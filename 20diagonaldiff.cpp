#include<iostream>
using namespace std;
int main()
{
    int arr[20][20];
    int n;
    cin>>n;
    cout<<"ENTER NUMBER OF ROWS OR COLUMNS: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];                                        
        }                                                            
    }                                                                
    int d1sum=0;
    for(int i=0;i<n;i++)
    {
        d1sum=d1sum+arr[i][i];
    }
    int d2sum=0;
    int j=n-1;
    for(int i=0;i<n;i++)
    {
        while(j>=0)
        {
            d2sum=d2sum+arr[i][j];
             j=-1;
        }
        i++;
        j=n-i-1;
    }

    cout<<d1sum<<" "<<d2sum;

}
    