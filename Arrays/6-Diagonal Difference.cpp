//Program to find the difference between the sum of the diagonals of a matrix
//Approach: 1. Take the matrix as input
//          2. Take two variables d1sum and d2sum and initialize them to 0
//          3. Traverse the matrix and add the elements of the main diagonal to d1sum
//          4. Traverse the matrix and add the elements of the secondary diagonal to d2sum
//          5. Print the difference between d1sum and d2sum
//Time Complexity: O(n^2)
//Space Complexity: O(n^2)

#include<iostream>
using namespace std;
int main()
{
    int arr[20][20];
    int n;
    cin>>n;
    cout<<"ENTER NUMBER OF ROWS OR COLUMNS: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];                                        
        }                                                            
    }  
    
    
    //Traversing the matrix and adding the elements of the main diagonal to d1sum
    int d1sum=0;
    for(int i=0;i<n;i++)
    {
        d1sum=d1sum+arr[i][i];
    }
    int d2sum=0;
    int j=n-1;

    //Traversing the matrix and adding the elements of the secondary diagonal to d2sum
    for(int i=0;i<n;i++)
    {
        while(j>=0)
        {
            d2sum=d2sum+arr[i][j];
             j=-1;
        }
        i++;
        j=n-i-1;
    }

    cout<<d1sum<<" "<<d2sum;

}
    