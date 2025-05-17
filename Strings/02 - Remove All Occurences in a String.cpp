//REMOVING THE SUBSTRING PRESENT IN A STRING
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string st,s;
    cout<<"ENTER STRING: ";
    cin>>st;
    cout<<"ENTER SUBSTRING: ";
    cin>>s;
    while(st.length()>=0 && st.find(s)<st.length())
    {
       st.erase(st.find(s),s.length());
    }

    cout<<"AFTER REMOVING THE OCCURENCE OF A SUBSTRING IN STRING: "<<st;


}    