//Sorting 0s,1s,2s
//Using DUTCH NATIONAL FLAG ALGORITHM
#include<iostream>
#include<vector>
using namespace std;


    int main()
    {
        int n;
        int nums[20];
        cout<<"ENTER NUMBER OF ELEMENTS IN AN ARRAY: ";
        cin>>n;
        cout<<"ENTER ARRAY ELEMENTS (ONLY 0,1,2): ";
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
         
        int st=0;
        int en=n-1;
    

        for(int i=st;i<=en;i++)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[st]);
                st++;
                
            }

            else if(nums[i]==2)
            {
                swap(nums[i],nums[en]);
                en--;
                i--;
            }
            
        }

        cout<<"ELEMENTS AFTER 1ST SORTING: ";
        for(int i=0;i<n;i++)
        {
           cout<<nums[i]<<"";
        }


       //WE CAN USE THIS METHOD ALSO 
       /*
        st=0;
        en=n-1;
    
        for(int i=st;i<=en;i++)
        {
            
            if(nums[i]==0)
            {
                swap(nums[i],nums[st]);
                st++;
                i++;
                
            }

            else if(nums[i]==2)
            {
                swap(nums[i],nums[en]);
                en--;
                i--;
            }
            else{
                i++;
            }
            
        }

        cout<<"ELEMENTS AFTER 2nd SORTING: ";
        for(int i=0;i<n;i++)
        {
           cout<<nums[i]<<"";
        }

        */
        
    }
    




 