//PROGRAM TO PRINT MATRIX IN A SPIRAL ORDER
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int r,c;
    int matrix[30][30];
    cout<<"ENTER NUMBER OF ROWS IN A MATRIX: ";
    cin>>r;
    cout<<"ENTER NUMBER OF COLUMNS IN A MATRIX: ";
    cin>>c;
    cout<<"ENTER ELEMENTS OF "<<r<<"x"<<c<<" MATRIX:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"MATRIX ELEMENTS IN SPIRAL ORDER IS: \n";


    int srow=0,scol=0,erow=r-1,ecol=c-1;
    while(srow<=erow &&scol<=ecol)
    {
        for(int i=scol;i<=ecol;i++)
        {
          //ans.push_back(matrix[srow][i]);
          cout<<matrix[srow][i]<<" ";
        }
        for(int j=srow+1;j<=erow;j++)
        {
            //ans.push_back(matrix[j][ecol]);
            cout<<matrix[j][ecol]<<" ";
        }
        for(int i=ecol-1;i>=scol;i--)
        {
            if(erow==srow)
            {
                break;
            }
           // ans.push_back(matrix[erow][i]);
        cout<<matrix[erow][i]<<" ";
        }
        for(int j=erow-1;j>=srow+1;j--)
        {
            if(scol==ecol)
            {
                break;
            }
            //ans.push_back(matrix[j][scol]);
        cout<<matrix[j][scol]<<" ";
        }
        scol++;erow--;ecol--;srow++;
        }     
}