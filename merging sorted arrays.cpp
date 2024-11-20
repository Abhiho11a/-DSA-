//merging 2 sorted array
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,k;
    int arr1[20];int arr2[20];int arrf[50];
    cout<<"enter number of elements in 1st array ";
    cin>>n1;
    cout<<"ENER 1ST ARRAY ELEMENTS\n";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }

    cout<<"enter number of elements in 1st array ";
    cin>>n2;
    cout<<"ENTER 2ND ARRAY ELEMENTS\n";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    
// MERGING 2 ARRAYS

    int i=0;int j=0;
    k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {  
            arrf[k]=arr1[i];
            k++;
            i++;
        }
        else
        {
            arrf[k]=arr2[j];
            k++;
            j++;

        }

    }
    while(i<n1)
    {
        arrf[k]=arr1[i];
        k++;
        i++;
    }
    
    while(j<n2)
    {
        arrf[k]=arr2[j];
        k++;
        j++;
    }


    //PRINTING MERGED ARRAY
    int f=n1+n2;
    for(int i=0;i<f;i++)
    {
        cout<<arrf[i]<<" ";
    }    
} 


/* IF ARRAY IS NOT SORTED THEN INSERT THESE LINES 
   LINE NO 60 AND THEN PRINT IT
for(int i=0;i<f;i++)
    {
        for(int j=i+1;j<f-1;j++)
        {
            if(arrf[i]>arrf[j])
            {
                swap(arrf[i],arrf[j]);
            }
            else{
                continue;
            }
        }
    }
    */