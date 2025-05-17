//PROGRAM TO FIND THE MOST REPEATED CHARACTER IN A STRING
#include<iostream>
using namespace std;

int main()
{

int arr[26]={0};
cout<<"ENTER STRING: ";
string st;
cin>>st;

for(int i=0;i<st.size();i++)
{
    int a=st[i]-'a';         //STORING COUNT USING ASCII VALUES IN AN ARRAY

    arr[a]++;
}

char ans;
int max=arr[0];
for(int i=0;i<26;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
        ans=i+'a';//CONVERTING BACK ASCII VALUE INTO CHARACTER
    }
}

cout<<"CHARACTER '"<<ans<<"' OCCURED "<<max<<" TIMES";
}
