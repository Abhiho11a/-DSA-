#include<iostream>
using namespace std;
int main()
{
    int n,target;
    int arr[50];
    int ans1=-1,ans2=-1;
    cout<<"ENTER NUMBER OF ELEMENTS IN AN ARRAY: ";
    cin>>n;
    cout<<"ENTER ARRAY ELEMENTS:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"ENTER ELEMENT TO CHECK: ";
    cin>>target;

    //getting first occurence in an array
    for(int i=0;i<n;i++)
    {
         if(target==arr[i])
          {
            ans1=i;
            break;
          } 
    }

    //getting last occurence in an array
    for(int j=n-1;j>=0;j--)
    {
        if(target==arr[j])
           {
                  ans2=j;
                  break;
           }
    }

   //output
    cout<<"FIRST OCCURENCE OF ELEMENT "<<target<<" IS AT INDEX "<<ans1<<" AND LAST OCCURENCE IS AT INDEX "<<ans2;

}