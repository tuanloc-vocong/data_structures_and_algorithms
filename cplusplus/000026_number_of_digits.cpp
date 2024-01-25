// Title: Number Of Digits
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(|n|)
// Space Complexity: O(1)
// Topic: User Defined Function

/**
 * Cho một số nguyên dương N, hãy cho biết số N có bao nhiêu chữ số.
 * 
 * Input:
 * Một số nguyên dương N (N≤10^​9).
 * 
 * Output:
 * In ra số lượng chữ số của N.
 *  
 * Example 1:
 * Input:
 * 10
 * 
 * Output:
 * 2
 **/

#include <iostream>

using namespace std;

int countNumber(int n){
    int cnt = 0;
    while(n > 0){
        cnt++;
        n /= 10;
    }
    return cnt;
}

int main(){
    int N;
    cin >> N;
    cout << countNumber(N);
    return 0;
}