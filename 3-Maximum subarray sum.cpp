//program to print maximum subarray sum
#include<iostream>
#include<climits>
using namespace std;
int maxsum= INT_MIN;
main()
{
  int n;
  int arr[100];

  //INPUTTING
  cout<<"enter number of elements ";
  cin>>n;
  cout<<"enter array elements ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }


//TO PRINT ALL SUBSETS
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      for(int k=i;k<=j;k++)
      {
        cout<<arr[k];
      }
      cout<<" ";
    }cout<<endl;
  }



  int csum=arr[0];
  int maxsum=arr[0];
  for(int i=0;i<n;i++)
  {
     csum=max(csum+arr[i],arr[i]);
     maxsum=max(csum,maxsum);   
  
  }

  
cout<<"maximum sum of subset of an array is"<< maxsum;
}



