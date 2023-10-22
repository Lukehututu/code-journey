#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<stdio.h>

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int* pc = (int*)malloc(digitsSize * sizeof(int));
    if (!pc)
        return NULL;
    returnSize = pc;
    int i = digitsSize - 1;
    while (i >= 0)
    {
        if (i + 1 == digitsSize)
        {
            returnSize[i] = digits[i] + 1;
            if (returnSize[i] == 10)
            {
                returnSize[i] = 0;
                returnSize[i - 1]++;
            }

        }
        else if(i+1<digitsSize)
        {
            returnSize[i] = digits[i];
            if (returnSize[i] == 10)
            {
                returnSize[i] = 0;
                if(i > 0)
                returnSize[i - 1]++;
            }
        }
        i--;
    }
    if (returnSize[0] == 0)
    {
        int* pt = (int*)malloc((digitsSize + 1) * sizeof(int));
        while (digitsSize)
        {
            pt[digitsSize] = returnSize[digitsSize - 1];
            digitsSize--;
            if(digitsSize==0)
                pt[0] = 1;
        }
        return pt;
    }
    return returnSize;
}


int main(){

    int arr[] = {9};
    int  length = 1;
    int* pc = (int*)malloc(length * sizeof(int));
    int* ret = plusOne(arr, length, pc);
    int i = 0;
    while (i<length)
    {
        printf("%d ", ret[i]);
        i++;
    }

}