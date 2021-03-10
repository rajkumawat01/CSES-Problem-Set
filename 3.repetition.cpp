
/*
    You are given a DNA sequence: a string consisting of characters
    A, C, G, and T. Your task is to find the longest repetition in
    the sequence. This is a maximum-length substring containing only
    one type of character.
    Input
        The only input line contains a string of n characters.
    Output
        Print one integer: the length of the longest repetition.
    Constraints
        1≤n≤106
    Example
        Input:
            ATTCGGGA
        Output:
            3
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ss;
    int n;
    cin >> ss;
    int m = ss.length();
    long long int a[100000000];
    a[0] = 1;
    n = 0;
    for(int i=1; i<m; i++)
    {
        //checking if char at current index
        //is equal to previous character.
        if(ss[i] == ss[i-1])
        {
            a[n] = a[n] + 1;
        }
        else
        {
            n = n + 1;
            a[n] = 1;
        }
    }
    //sorting in descending order
    sort(a, a + m, greater<int>());
    cout << a[0];
    return 0;
}
