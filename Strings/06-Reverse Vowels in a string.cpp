//Program to reverse vowels in a string
#include<iostream>
#include<string>
using namespace std;


int main()
{
    string str;
    cout<<"ENTER A STRING: ";
    cin>>str;

   int st=0,en=str.size()-1;

   while(st<=en)
    {   
        char s1=tolower(str[st]);//CONVERTING CHAR TO LOWERCASE IF IT IS IN UPPERCASE
        char s2=tolower(str[en]);


        if(s1=='a' || s1=='e' || s1=='i' || s1=='o' || s1=='u')//CHECKING THE CHAR IS VOWEL OR NOT
        {
            if(s2=='a' || s2=='e' || s2=='i' || s2=='o' || s2=='u')
            { swap(str[st++],str[en--]); }

            else
            en--;
        }
        else
        st++;
        
    }

    cout<<"STRING AFTER REVERSING: "<<str;
}