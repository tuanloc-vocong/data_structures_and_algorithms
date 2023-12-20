// Title: Leap Year
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic:

/**
 * Upan và Ipan vừa được học về năm nhuận, cô giáo bảo họ rằng, một năm là năm nhuận khi:
 * 
 * Năm đó chia hết cho 4 mà không chia hết cho 100. Ví dụ như 2004, 2012 là các năm nhuận; 1800, 1900, … thì không phải.
 * Ngoài ra năm nhuận còn có thể là năm chia hết cho 400. Ví dụ như 2000, 1600 là các năm nhuận.
 * 
 * Do trên lớp không nghe giảng kỹ nên hai cậu đã quên mất các quy tắc xác định xem một năm có phải là năm nhuận hay không. Bạn
 * hãy viết một chương trình giúp hai cậu ấy nhé.
 * 
 * Input:
 * Một dòng duy nhất chứa một số nguyên dương x là năm cần kiểm tra. (1000≤x≤9000)
 * 
 * Output:
 * Nếu là năm nhuận in ra "YES". Ngược lại in ra "NO".
 * 
 * Example 1:
 * Input:
 * 1600
 * 
 * Output:
 * YES
 * 
 * Example 2:
 * Input:
 * 1900
 * 
 * Output:
 * NO
 **/

#include <iostream>

using namespace std;

int main(){
    int year;
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}