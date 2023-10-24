#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
using namespace std;
#include<iostream>
#include<string>

int strStr(char* haystack, char* needle)
{

    int len1 = strlen(haystack);
    int len2 = strlen(needle);
    int i = 0, j = 0;
    //to ensure 
    while (i <= len1 - 1 && j <= len2 - 1)
    {
        //if equal then step up
        if (haystack[i] == needle[j])
        {
            i++;
            j++;

        }
        //if unequal then back
        else
        {
            i = i - j + 1;
            j = 0;
        }
    }
    if (j = len2)
        return i - len2;
    return -1;
}

//int main()
//{
//    char* p1 = "leetcode";
//    char* p2 = "leeto";
//    printf("%d", strStr(p1, p2));
//}


bool repeatedSubstringPattern(char* s)
{

    //获得子串
    //子串长度最多是主串的1/2
    int len = strlen(s) / 2;
    int LEN = strlen(s);
    char* pc = s;
    int i = 0;
    for (i = 1; i <= len; i++)
    {
        int j = 0;
        for (j = 0; j <= LEN-i-1; j++)
        {
            if (pc[j] != pc[j + i])
                break;
            else if (pc[j] == pc[j + i])
            {
                if (j + i == LEN - 1 && LEN % i == 0)
                    
                    return true;
            }
        }
    }
    //比较
    return false;
}

int main()
{
    char arr[] = "ababab";
    cout << repeatedSubstringPattern(arr) << endl;



}