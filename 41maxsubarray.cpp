#include<iostream>
#include<climits>
using namespace std;
int maxsum= INT_MIN;
main()
{
  int n;
  int csum=0;
  int maxsum=INT_MIN;
  int arr[100];
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
  
  for(int i=0;i<n;i++)
  {
     csum=csum+arr[i];
     maxsum=max(csum,maxsum);   
  
  }
cout<<"maximum sum of subset of an array is"<< maxsum;
}



