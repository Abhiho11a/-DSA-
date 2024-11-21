#include<iostream>
using namespace std;
int main()
{
    int r,c,key;
    int ans=0,ans1,ans2;
    int mat[50][50];
    cout<<"ENTER NUMBER OF ROWS IN MATRIX:\n";
    cin>>r;
    cout<<"ENTER NUMBER OF COLUMNS IN A MATRIX:\n";
    cin>>c;
    cout<<"ENTER MATRIX ELEMENTS:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"ENTER ELEMENT TO SEARCH: ";
    cin>>key;


    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(mat[i][j]==key)
            {  
               ans1=i;
               ans2=j;
                ans=1;
            }
            else
            {
                continue;
            }
        }
    }


    if(ans)
    {
        cout<<"element present at index "<<"["<<ans1<<","<<ans2<<"]";
    }
    else
    {
        cout<<"element not found";
    }
    } 