//TO FIND MISSING AND REPEATED ELEMENT IN A MATRIX
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main()
{                                            //HERE MATRIX ELEMENTS MUST BE CONTINUOIUS IN RANGE 
    int n;                                   //FOR EX:-IF N=3,THE ELEMETS MUST BE IN THE RANGE OF 0->3*3
   int mat[30][30];
    unordered_set<int>s;
    vector<int>ans;
    cout<<"ENTER NUMBER OF ROWS OR COLUMN: ";
    cin>>n;
    cout<<"ENTER ELEMENTS FOR "<<n<<"x"<<n<<" MATRIX:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    int expsum=n*n *((n*n)+1)/2;
    int actsum=0;
    int a=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            actsum=actsum+mat[i][j];

            if(s.find(mat[i][j])!=s.end())//HERE WE CAN FIND THE REPEATED ELEMENT BY SETS CONCEPT 
            {   
                a=mat[i][j];
                
            }
            s.insert(mat[i][j]);
        }
    }

    int b=expsum+a-actsum;//MISSING ELEMENT IS CALCULATED BY KNOWING MISSING NUMBER 
    
    cout<<"Missing element in a matrix is "<<b<<" and repeted element in an array is "<<a;



}