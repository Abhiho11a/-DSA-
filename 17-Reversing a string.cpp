//REVERSING A STRING 
#include<iostream>
using namespace std;
int main()
{
    string st;
    cout<<"ENTER A STRING: "; 
    cin>>st;
    
     
    int s=0,e=st.size()-1;

    while(s<=e)
    {
        swap(st[s++],st[e--]);
    }
    cout<<"STRING AFTER REVERSING: ";
    for(int i=0;i<st.size();i++){
    cout<<st[i];}
}