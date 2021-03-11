
/*
    link to problem: https://cses.fi/problemset/task/1094/

    Increasing Array

    You are given an array of n integers.
    You want to modify the array so that
    it is increasing, i.e., every element
    is at least as large as the previous element.
    On each move, you may increase the
    value of any element by one.
    What is the minimum number of moves required?
    Input
        The first input line contains an integer n:
        the size of the array.
        Then, the second line contains n integers
        x1,x2,…,xn: the contents of the array.
    Output
        Print the minimum number of moves.
    Constraints
        1≤n≤2⋅105
        1≤xi≤109
    Example
        Input:
            5
            3 2 5 1 7
        Output:
            5
*/

#include <iostream>
using namespace std;

int main()
{
    long long int n,m,p;
    cin >> n;
    long long int a[n];
    p = 0;

    //collecting numbers into the array
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    //comparing number with the number at
    //previous index
    for(int j=0; j<n; j++)
    {
        if(a[j+1] < a[j])
        {
            m = a[j];
            m = m - a[j+1];
            a[j+1] += m;
            p = p + m;
        }
    }
    cout << p;
    return 0;
}
