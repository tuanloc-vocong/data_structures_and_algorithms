// Title: Sàng Số Nguyên Tố
// Source: 28tech
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(nlog(logn))
// Space Complexity:
// Topic: Number Theory

/**
 * Input:
 * Số nguyên tố n (0≤n≤10^6).
 *
 * Output:
 * In ra trên một dòng các số nguyên tố không vượt quá n, mỗi số cách nhau một khoảng trắng.
 *
 * Example 1:
 * Input:
 * 4
 *
 * Output:
 * 2 3
 *
 * Example 2:
 * Input:
 * 13
 *
 * Output:
 * 2 3 5 7 11 13
 **/

#include <stdio.h>

using namespace std;

int prime[1000001];

void sieve()
{
    for (int i = 0; i <= 1000000; i++)
        prime[i] = 1;

    prime[0] = prime[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int main()
{
    sieve();
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (prime[i])
        {
            printf("%d ", i);
        }
    }
}