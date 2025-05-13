//TO FIND 2 NUMBERS WHOSE SUM ISEQUAL TO THE TARGET
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    int n,target;
    int ans1,ans2=0;
    vector<int>ans;                                     //USING CONCEPT OF HASHING
    unordered_map<int,int>box;
    int arr[50];
    cout<<"Enter the number of elements in an array: ";
    cin>>n;
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target sum: ";
    cin>>target;


    for(int i=0;i<n;i++)
    {
        int first=arr[i];
        int second=target-first;

        if(box.find(second)!=box.end())
        {
            ans2=i;
            ans1=box[second];
            break;
        }
        box[first]=i;
    }

    cout<<"Add the element present in index "<<ans1<<" and "<<ans2<<" to get ans is equal to "<<target;
}