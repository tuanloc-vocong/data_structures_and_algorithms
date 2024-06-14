// Title: Kiểm Tra Số Nguyên Tố
// Source: 28tech
// Difficulty: Easy
// Author: tuanloc-vocong
// Time Complexity: O(√n)
// Space Complexity:
// Topic: Number Theory

/**
 * Input:
 * Số nguyên tố n (0≤n≤10^9).
 *
 * Output:
 * In YES nếu n là số nguyên tố, ngược lại in NO.
 *
 * Example 1:
 * Input:
 * 4
 *
 * Output:
 * NO
 *
 * Example 2:
 * Input:
 * 13
 *
 * Output:
 * YES
 **/

#include <stdio.h>
#include <math.h>

using namespace std;

int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (prime(n))
        printf("YES");
    else
        printf("NO");
}