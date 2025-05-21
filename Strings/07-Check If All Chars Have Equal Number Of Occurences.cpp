//Check if All Characters Have Equal Number of Occurrences
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

main(){

    vector<int>ans(26,0);
    string st;
    cout<<"Enter the string: ";
    cin>>st;

    for(int i=0;i<st.length();i++)
    {
        int x = st[i]-'a'; //To convert char to int
        ans[x]++;//Increment the count of that character
    }
    
    sort(ans.begin(),ans.end());//Sort the vector
    reverse(ans.begin(),ans.end());//Sort in descending order
    //This will help us to remove the duplicate elements   

    int zeroCount = 0;

    for(int i:ans)
    i==0?zeroCount++:NULL;//Count the number of zeros in the vector

    int i = 0;
    while(i<zeroCount)
    {
        ans.pop_back();//Remove the zeros from the vector
        i++;
    }

    int flag = 1;//Flag to check whether "False" or "True" to be printed
    for(int i=0;i<ans.size()-1;i++)
    {
        int curr = ans[i];
        int next = ans[i+1];
        if(curr!=next)
        {
            cout<<"False";
            flag = 0;
            break;
        }
        else
        continue;
    }

    if(flag) //If flag is still 1 then all the characters have equal number of occurrences
    cout<<"True";
}