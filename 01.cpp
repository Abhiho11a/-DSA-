// 3442. Maximum Difference Between Even and Odd Frequency I

/* You are given a string s consisting of lowercase English letters.
   Your task is to find the maximum difference diff = freq(a1) - freq(a2) between the frequency of characters a1 and a2 in the string such that:
   a1 has an odd frequency in the string.
   a2 has an even frequency in the string.
   Return this maximum difference. 
*/
#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;

int MaxDiff(string s)
{
    vector<int> arr(26,0);

    for(int i=0;i<s.length();i++)
    arr[s[i] - 'a']++;
    
    vector<int> odd;
    vector<int> even;

    for(int i : arr)
    {
        if(arr[i] == 0)
        continue;

        if(arr[i] % 2 == 0)
        even.push_back(arr[i]);
        else
        odd.push_back(arr[i]);
    }

    int ans = INT_MIN;

    if(even.size() == 0 || odd.size() == 0)
    return -1;

    for(int i:odd)
    for(int j:even)
    ans = max(i-j,ans);

    return ans;
}

main()
{
    string s = "aaaaabbc";

    cout<<MaxDiff(s);
}

