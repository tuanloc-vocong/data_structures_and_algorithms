// Title: Sàng Số Nguyên Tố Trên Đoạn
// Source: 28tech
// Difficulty: Easy
// Author: tuanloc-vocong
// Time Complexity: O(nlog(logn))
// Space Complexity:
// Topic: Number Theory

/**
 * Input:
 * 2 số nguyên không âm a, b(0≤a≤b≤10^9,b-a≤10^5).
 *
 * Output:
 * In ra các số nguyên tố trong đoạn từ a tới b (Chú ý lấy cả 2 cận).
 *
 * Example 1:
 * Input:
 * 4 20
 *
 * Output:
 * 5 7 11 13 17 19
 *
 * Example 2:
 * Input:
 * 1 5
 *
 * Output:
 * 2 3 5
 **/

#include <stdio.h>
#include <math.h>

using namespace std;

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

void sieve(int l, int r)
{
    int prime[r - l + 1];
    for (int i = 0; i < r - l + 1; i++)
    {
        prime[i] = 1;
    }

    for (int i = 2; i <= sqrt(r); i++)
    {
        for (int j = max(i * i, (l + i - 1) / i * i); j <= r; j += i)
        {
            prime[j - l] = 0;
        }
    }

    for (int i = max(l, 2); i <= r; i++)
    {
        if (prime[i - l])
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int l, r;
    scanf("%d%d", &l, &r);
    sieve(l, r);
}