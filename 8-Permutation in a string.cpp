//PROGRAM TO CHECK WHETHER THE PERMUTATION OF AN ENTERED STRING WILL BE IN THE OTHER ONE 
#include<iostream>
using namespace std;


bool isfreq(int fre1[],int fre2[])   //COMPARING 2 STRINGS USING ARRAY CONCEPT
{
    for(int i=0;i<26;i++)
    {if(fre1[i]!=fre2[i])
    {
        return false;
    }}
    return true;
}



bool check(string s1,string s2)//GETTING ALL THE CHARACTERS IN A STRING USING ARRAY
  {
    int f[26]={0};
    for(int i=0;i<s1.length();i++)
    {
        f[s1[i]-'a']++;//1ST STRING

    }


    int bxsize=s1.length();
    for(int i=0;i<s2.length();i++)
    {
        int bxind=0,
        ind=i;
        int bxfreq[26]={0};

        while(bxind<bxsize &&  ind<s2.length())
        {
            bxfreq[s2[ind]-'a']++;//2ND STRING 
            bxind++;
            ind++;
        }
    
       if(isfreq( f,bxfreq))//CALLING FUNCTION
       {
        return true;
       }
       
    } 
    return false;
    }


int main()
{
  std:string s1,s2;
  cout<<"enter a substring to check ";
  cin>>s1;
  cout<<"enter the string ";
  cin>>s2;
  cout<<check(s1,s2);//RETURNS 0,IF SUBSTRING IS NOT PRESENT IN STRING 

}

