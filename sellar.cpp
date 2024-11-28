#include<iostream>
using namespace std;
main()
{
    int n;
    int arr[20];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }



    /*
    int mini=0;
int min=arr[0];
    for(int i=0;i<n;i++)
    {if(arr[i]<min)
    {
        min=arr[i];
        mini=i;
        continue;
    }}
int max=arr[mini];
    for(int i=mini+1;i<n;i++)
    {
        if(arr[i]>max)
        { 
            max=arr[i];
            continue;
        }
    }

    cout<<max-min;


*/

int maxbuy=arr[0];
int maxpr=0;
for(int i=1;i<n;i++)
{if(arr[i]>maxbuy)
  {maxpr=max(maxpr,arr[i]-maxbuy);
   }



maxbuy=min(maxbuy,arr[i]);


}

cout<<maxpr;



}