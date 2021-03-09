/*
    You are given all numbers between 1,2,…,n except one.
    Your task is to find the missing number.
    ->Input
        The first input line contains an integer n.
        The second line contains n−1 numbers.
        Each number is distinct and between 1 and n (inclusive).
    ->Output
        Print the missing number.
    ->Constraints
        2≤n≤2⋅105
    ->Example
        Input:
            5
            2 3 1 5
        Output:
            4
*/

#include <iostream>
using namespace std;

int main()
{
    long long int n, n1;
    long long int sum;
    cin >> n;
    sum = n*(n+1);
    sum = sum*0.5;
    n = n - 1;
    for(int i=0; i<n; i++)
    {
        cin >> n1;
        sum = sum - n1;
    }
    cout << sum;
    return 0;
}
