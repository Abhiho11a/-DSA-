//PROGRAM TOCALCULAT PRODUCT OF ARRAY ELEMENTS EXCEPT ITSELF
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int arr[100];
    vector<int>ans;
    cout<<"ENTER NUMBER OF ELEMENTS: ";
    cin>>n;
    cout<<"ENTER ELEMENTS: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    

    //USING 2 ARRAYS
    int nums[n];
    nums[0]=1;

    int nums1[n];
    nums1[n-1]=1;

    for(int i=1;i<n;i++)
    {
        nums[i]=nums[i-1]*arr[i-1];//product of array elements from left till that particular element except self
    }
    for(int i=n-2;i>=0;i--)
    {
        nums1[i]=nums1[i+1]*arr[i+1];//product of array elements from that particular element except self to end of an array
    }
    for(int i=0;i<n;i++)
    {
        ans.push_back(nums[i]*nums1[i]);//Multiplying both array with corresponding elements
    }

    cout<<"PRODUCT USING TWO ARRAYS ARRAY: ";
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    /*

    //USING A SINGLE ARRAY
    vector<int>num(n,1);
    int suffix=1;
    for(int i=1;i<n;i++)
    {
        num[i]=num[i-1]*arr[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        num[i]=num[i]*suffix;
        suffix=suffix*arr[i];
    }
     
    cout<<"PRODUCT USING AN ARRAY: ";
    for(int i:num)
    {
        cout<<i<<" ";
    }

    */
}



