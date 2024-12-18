//BOOK ALLOCATION
#include<iostream>
using namespace std;

bool valid(int arr[],int n,int m,int mpages)
{
    int students=1;
    int pages=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]+pages<=mpages)
        {
            pages+=arr[i];
        }
        else{
            students++;
            pages=arr[i];
        }

    }

    return students>m?false:true;
}

int allocate(int arr[],int n,int m)
{   int sum=0;
    if(m>n){return-1;}
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }


    int ans=-1,st=0,en=sum;
    while(st<=en)
    {
        int mid=st+(en-st)/2;
        if(valid(arr,n,m,mid))
        {ans=mid;
            en=mid-1;
        }
        else{
            st=mid+1;
        }
    }

    return ans;
}
int main()
{
int n;
int m;
int arr[50];
cin>>n;
cin>>m;
for(int i=0;i<n;i++)
{
    cin>>arr[i];

}
cout<<"LEAST NUMBER OF PAGES IS "<<allocate(arr,n,m);
}