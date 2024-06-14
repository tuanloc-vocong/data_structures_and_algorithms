// Title: Kiểm Tra Số Nguyên Tố 2
// Source: 28tech
// Difficulty: Easy
// Author: tuanloc-vocong
// Time Complexity: O(nlog(logn))
// Space Complexity:
// Topic: Number Theory

/**
 * Input:
 * Dòng đầu tiên là số lượng test case T. (1≤T≤1000).
 * Mỗi test case là một số nguyên n (0≤n≤10^6)
 *
 * Output:
 * In ra kết quả mỗi test case trên một dòng. In YES nếu n là số nguyên tố, ngược lại in NO.
 *
 * Example 1:
 * Input:
 * 4
 * 2
 * 3
 * 20
 * 188
 *
 * Output:
 * YES
 * YES
 * NO
 * NO
 **/

#include <stdio.h>
#include <math.h>

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
    int t;
    scanf("%d ", &t);

    while (t--)
    {
        int n;
        scanf("%d ", &n);
        if (prime[n])
            printf("YES\n");
        else
            printf("NO\n");
    }
}