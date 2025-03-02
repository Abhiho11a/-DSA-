//Program to reverse an array
//Approach: 1. Take the array as input
//          2. Take two pointers s and e, s pointing to the start of the array and e pointing to the end of the array
//          3. Swap the elements at s and e
//          4. Increment s and decrement e
//          5. Continue the loop till s<=e
//          6. Print the reversed array
#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[20];
    cout<<"enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }



   int s=0;int e=n-1;
   while(s<=e)
   {
    swap(arr[s],arr[e]);
    s++;
    e--;
   }


   for(int i=0;i<n;i++)
   {
    cout<<arr[i];
   }
}
