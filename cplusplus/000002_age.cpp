// Title: Age
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic:

/**
 * Nhập vào năm sinh của một người. Tính tuổi của người đó tính đến năm 2019.
 * 
 * Input:
 * Một dòng duy nhất là năm sinh của một người. (năm sinh được tính sau Công Nguyên và là số nguyên dương nhỏ hơn năm 2019)
 * 
 * Output:
 * Một dòng duy nhất là số tuổi của người đó tính đến năm 2019.
 *  
 * Example 1:
 * Input:
 * 1999
 * 
 * Output:
 * 20
 **/

#include <iostream>

using namespace std;

int main(){
    int birthYear;
    cin >> birthYear;
    cout << 2019 - birthYear;
    return 0;
}