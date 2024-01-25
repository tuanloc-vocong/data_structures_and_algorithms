// Title: Compare
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Loop Statements

/**
 * Hôm nay cô giáo phát bài kiểm tra trong lớp. Cô đọc điểm lần lượt từng học sinh.
 * Sau khi đọc cô muốn bạn thống kê điểm số cao nhất lớp và điểm số thấp nhất lớp.
 * Bạn hãy viết 1 chương trình nhỏ, để giúp cô giáo nha.
 * 
 * Input:
 * Gồm nhiều dòng, mỗi dòng chứa một số nguyên duy nhất là điểm của từng học sinh trong lớp (Số dòng không quá 10000 dòng
 * và luôn ít nhất có điểm của một học sinh, dữ liệu đảm bảo số điểm không nhỏ hơn 0 và không lớn hơn 10). Kết thúc các
 * dòng dữ liệu điểm là một dòng chứa số −1.
 * 
 * Output:
 * Một dòng duy nhất chứa hai số nguyên lần lượt là điểm số cao nhất và điểm số thấp nhất cách nhau bởi một khoảng trắng.
 *  
 * Example 1:
 * Input:
 * 2
 * 7
 * 9
 * 1
 * -1
 * 
 * Output:
 * 9 1
 **/

#include <iostream>

using namespace std;

int main(){
    int max = -1;
    int min = 11;
    int n;

    while(true){
        cin >> n;
        if(n == -1){
            break;
        }

        if(n > max){
            max = n;
        }

        if(n < min){
            min = n;
        }
    }

    cout << max << " " << min;
    return 0;
}