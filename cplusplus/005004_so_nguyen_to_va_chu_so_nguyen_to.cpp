// Title: Số Nguyên Tố Và Chữ Số Nguyên Tố
// Source: 28tech
// Difficulty: Easy
// Author: tuanloc-vocong
// Time Complexity:
// Space Complexity:
// Topic: Number Theory

/**
 * Viết chương trình đếm xem trong đoạn [a,b] có bao nhiêu số là số nguyên tố và tất cả các chữ số của nó cũng là số nguyên tố.
 *
 * Input:
 * Dòng đầu ghi số bộ test.
 * Mỗi bộ test ghi 2 số a, b (1<a<b<10^6).
 *
 * Output:
 * Với mỗi bộ test, ghi ra số lượng số thỏa mãn trên một dòng.
 *
 * Example 1:
 * Input:
 * 2
 * 10 100
 * 1234 5678
 *
 * Output:
 * 4
 * 26
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
            for (int j = i * i; j <= 1000000; i += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int digitPrime(int n)
{
    while (n)
    {
        int r = n % 10;
        if (r != 2 && r != 3 && r != 5 && r != 7)
            return 0;
        n /= 10;
    }
    return 1;
}

int main()
{
    int t;
    sieve();
    scanf("%d ", &t);
}