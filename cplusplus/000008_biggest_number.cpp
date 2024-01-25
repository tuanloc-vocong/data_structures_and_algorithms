// Title: Biggest Number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic: Conditional Statements

/**
 * Bài toán tìm giá trị lớn nhất của hai số nguyên là một bài toán rất cơ bản trong tin học. Bạn được cho đầu
 * vào 2 số nguyên a và b, hãy tìm giá trị lớn nhất của hai số nguyên đó.
 * 
 * Input:
 * Một dòng duy nhất chứa hai số nguyên a, b (∣a∣,∣b∣≤1000000)
 * 
 * Output:
 * In ra một dòng duy nhất là giá trị lớn nhất của hai số nguyên a và b.
 *  
 * Example 1:
 * Input:
 * 2 3
 * 
 * Output:
 * 3
 **/

#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a > b){
        cout << a;
    }else{
        cout << b;
    }
    return 0;
}