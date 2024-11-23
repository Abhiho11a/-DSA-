 //PROGRAM TO FIND ROW AND COLUMN SUM
 #include<iostream>
 using namespace std;
 int main()
{
    int r,c;
    int mat[30][30];
    cout<<"enter number of rows and column in a matrix:\n";
    cin>>r>>c;
    cout<<"enter matrix elements: \n";
    for(int i=0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {
             cin>>mat[i][j];
        }
    }
    cout<<"\n";



    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
     
    
    
    for(int i=0;i<r;i++)
    {
        int rsum=0;     
        for(int j=0;j<c;j++)
        {
            rsum=rsum+mat[i][j];
        }
        cout<<"\n";
        cout<<"row "<<i<<" sum is "<<rsum<<"\n";
    }



    for(int j=0;j<c;j++)
    {  
        int csum=0;
        for(int i=0;i<r;i++)
        {
            csum=csum+mat[i][j];
        }
        cout<<"\n";
        cout<<"colum "<<j<<" sum is "<<csum<<"\n"; 
    }
 
}   