
/*
    link : https://cses.fi/problemset/task/1070

    Permutation

    A permutation of integers 1,2,…,n is called beautiful
    if there are no adjacent elements whose difference is 1.
    Given n, construct a beautiful permutation if such a permutation exists.
    Input
        The only input line contains an integer n.
    Output
        Print a beautiful permutation of integers 1,2,…,n.
        If there are several solutions, you may print any of them.
        If there are no solutions, print "NO SOLUTION".

    Constraints
        1≤n≤106
    Example 1
    Input:
        5
    Output:
        4 2 5 3 1
    Example 2
    Input:
        3
    Output:
        NO SOLUTION
*/

#include <iostream>
using namespace std;

int main()
{
    long long int n,i;
    cin >> n;
    if(n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }
    i = 2;
    while(i <= n && (n != 2 && n != 3))
    {
        cout << i << " ";
        i += 2;
    }
    i = 1;
    while(i <= n && (n != 2 && n != 3))
    {
        cout << i << " ";
        i += 2;
    }
    return 0;
}
