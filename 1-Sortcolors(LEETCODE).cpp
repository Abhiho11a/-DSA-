//sort colours in the sense arranging array elements in an ascending order
#include<iostream>
using namespace std;

  void sortColors(int nums[20],int n) {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]>nums[j])
                {
                    swap(nums[i],nums[j]);
                }    
                else
                {
                    continue;
                }
            
            }
        }
        cout<<"ELEMENTS AFTER SORTING: ";
        for(int i=0;i<n;i++)
        {
            cout<<nums[i]<<" ";
        }
        
  }


    int main()
    {
        int n;
        int nums[20];
        cout<<"ENTER NUMBER OF ELEMENTS IN AN ARRAY: ";
        cin>>n;
        cout<<"ENTER ARRAY ELEMENTS: ";
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        sortColors(nums,n);
    }




 
