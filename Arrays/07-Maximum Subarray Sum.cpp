//Program to find the maximum sum of a subset of an array
//Approach: 1. Take the array as input
//          2. Take a variable csum and initialize it to the first element of the array
//          3. Take a variable maxsum and initialize it to the first element of the array
//          4. Traverse the array from the second element
//          5. Add the current element to csum
//          6. Update maxsum to the maximum of csum and maxsum
//          7. If csum is less than 0, update csum to 0
//          8. Print maxsum
//Time Complexity: O(n)
//Space Complexity: O(1)


#include<iostream>
#include<climits>
using namespace std;

main()
{
  int n;
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


  int csum=arr[0];
  int maxsum=arr[0];

  
  for(int i=1;i<n;i++)
  {
     csum=max(csum+arr[i],arr[i]);
     maxsum=max(csum,maxsum);   
    
    if(csum<0)
    {
      csum=0;
    }
}
cout<<"maximum sum of subset of an array is "<< maxsum;
}



