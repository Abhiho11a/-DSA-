//PROGRAM TO MULTIPLY 2 STRINGS
#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>

int main()
{
    string num1;
    string num2; 
    cin>>num1;
    cin>>num2;

    int x=num1.size()-1;
    int y=num2.size()-1;
     vector<int>ans(x+y+2,0);
    for(int i=x;i>=0;i--)
    {
        for(int j=y;j>=0;j--)
        {
            ans[i+j+1]+=(num1[i]-'0') * (num2[j]-'0');
            ans[i+j]+=ans[i+j+1]/10;

            ans[i+j+1]=ans[i+j+1]%10;
        }
    }

    int i=0;
    while(i<ans.size() && ans[i]==0)
    {
        ++i;
    }

    string res="";
    while(i<ans.size())
    {
        res.push_back(ans[i++]+'0');
    }
    
    cout<<res;

}
