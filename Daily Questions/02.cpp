// 2566. Maximum Difference by Remapping a Digit

/* You are given an integer num. You know that Bob will sneakily 
    remap one of the 10 possible digits (0 to 9) to another digit.
    Return the difference between the maximum and minimum values 
    Bob can make by remapping exactly one digit in num.
*/
#include<iostream>
#include<string>
using namespace std;

int minMaxDifference(int num)
{
    string max_str = to_string(num);
    string min_str = to_string(num);


    char firstOcc; //To get first char which is not 9

    for(int i=0;i<max_str.length();i++)
    {
        if(max_str[i] != '9')
        {
            firstOcc = max_str[i];//To get first char which is not 9
            break;
        }
    }

    for(int i=0;i<max_str.length();i++)
    {
        if(max_str[i] == firstOcc)
        max_str[i] = '9';    
    }
    int max_num = stoi(max_str);


    //Same above method to find char which is not zero
    for(int i=0;i<min_str.length();i++)
    {
        if(min_str[i] != '0')
        {
            firstOcc = min_str[i];//To get first char which is not 0
            break;
        }
    }
    for(int i=0;i<min_str.length();i++)
    {
        if(min_str[i] == firstOcc)
        min_str[i] = '0';    
    }
    int min_num = stoi(min_str);

    return (max_num - min_num);
}
main()
{
    int num;
    cout<<"Enter Num: ";
    cin>>num;
    
    cout<< minMaxDifference(num);
}