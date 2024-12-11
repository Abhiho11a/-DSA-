//PROGRAM TO ALTER THE STRING SUCH THAT THE STRING CONTAINS THE FREQUENCY OF CHARACTERS
#include<iostream>
#include<string>
using namespace std;
int main() 
{
  string in;
  int ind=0;
  cout<<"ENTER STRING: ";
  cin>>in;

  for(int i=0;i<in.size();i++){
    int count=0;
    char temp=in[i];

    while(i<in.size() && in[i]==temp)    //CALCULATING THE FREQUENCY OF A LETTER IN A STRING
    {
      count++;
      i++;
    }

    if(count==1)
    {
      in[ind++]=temp;
    }
    else
    {
      in[ind++]=temp;
      string st=to_string(count);
      for(int val:st)
      {
        in[ind++]=val;
      }
    }
    i--;
  }

//OUTPUT
  cout<<"STRING AFTER ALTERING: "
  for(int i=0;i<ind;i++)
  {
    cout<<in[i]<<"";
  }

}