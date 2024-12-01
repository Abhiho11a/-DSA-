//TO CHECK WHETHER THE GIVEN STRING IS A PALINDROME OR NOT
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0,j=s.size()-1;
    int ans=true

    while(i<j)
    {
        if(isalnum(s[i]))
        {

            if(isalnum(s[j]))
            {
                
                 if(tolower(s[i])!=tolower(s[j]))
                 {
                    ans= false;
                 }
            
            }
            else
            {
            j--;
            continue;}
        }
        else
        {
            i++;
            continue;
        }
            
    i++; 
    j--;
    }
        
if(ans)
{
    cout<<"IT IS A PALINDROME";
}
else{
    cout<<"ITS NOT A PALINDROME";
}
}