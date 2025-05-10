//COUNTING PRIME NUMBERS 
#include<iostream>                   //SIEVE OF ERATOSTHENES
#include<vector>                  
using namespace std;
int main()
{
    int n;
    vector<bool>ans(n+1,true);   //FIRST ASSIGNING ALL N+1 ELEMENTS IN VECTOR TO TRUE 
    cout<<"ENTER NUMBER: ";
    cin>>n;
    int c=0;
    for(int i=2;i<n;i++)
    {
        if(ans[i])
        {
            c++;
        }
        for(int j=i*2;j<n;j=j+i) //ASSING FALSE TO THE VECTOR ELEMENTS WHICH ARE EXACTLY DIVIDED BY PREVIOUS NUMBER
        {
            ans[j]=false;
        }
    }
    cout<<"PRIME NUMBERS FORM 0 TO "<<n<<" IS "<<c;

}