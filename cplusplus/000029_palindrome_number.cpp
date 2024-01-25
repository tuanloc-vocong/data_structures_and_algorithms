// Title: Palindrome Number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: User Defined Function

/**
 * Cho số nguyên dương n, kiểm tra số n có phải là số đối xứng hay không. Biết rằng số đối xứng là số mà đọc từ trái sang phải
 * (không bao gồm các chữ số 0 vô nghĩa ở đầu) hay từ phải sang trái đều như nhau.
 * 
 * Ví dụ số 12321 là số đối xứng, 1221 là đối xứng, 5656 không phải số đối xứng, 100 không phải là số đối xứng.
 * 
 * Input:
 * Một dòng duy nhất là số nguyên dương n (n≤1.000.000).
 * 
 * Output:
 * Nếu n là số đối xứng in ra "YES", ngược lại in ra "NO".
 * Không in dấu "".
 *  
 * Example 1:
 * Input:
 * 11
 * 
 * Output:
 * YES
 * 
 * Example 2:
 * Input:
 * 10
 * 
 * Output:
 * NO
 **/

#include <iostream>

using namespace std;

int reverseNumber(int n){
    int reNu = 0;
    while(n > 0){
        reNu = reNu * 10 + n % 10;
        n /= 10;
    }
    return reNu;
}

int main(){
    int N;
    cin >> N;
    if(N == reverseNumber(N)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}